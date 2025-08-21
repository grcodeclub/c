//gcc -o output_file input_file.c -lcurl
#include <stdio.h>
#include <curl/curl.h>

int main(void) {
    CURL *curl;
    CURLcode res;

    // Αρχικοποίηση της βιβλιοθήκης libcurl
    curl_global_init(CURL_GLOBAL_DEFAULT);

    // Δημιουργία του αντικειμένου CURL για την αίτηση
    curl = curl_easy_init();
    if (curl) {
        // Ορισμός της διεύθυνσης URL για την αίτηση
        curl_easy_setopt(curl, CURLOPT_URL, "https://www.example.com");

        // Εκτέλεση της αίτησης GET
        res = curl_easy_perform(curl);
        if (res != CURLE_OK)
            fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));

        // Απελευθέρωση του αντικειμένου CURL
        curl_easy_cleanup(curl);
    }

    // Καθαρισμός της βιβλιοθήκης libcurl
    curl_global_cleanup();
    return 0;
}
