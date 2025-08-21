#include <windows.h>
#include <stdio.h>

typedef ULONGLONG(WINAPI *GETTICKCOUNT64)(void);

int main() {
    //Αλλαγή της κωδικοποίησης σε 1253 ("Windows-1253" ή "Greek Windows")
    //system("chcp 1253");
    //Αλλαγή της κωδικοποίησης σε UTF-8
    system("chcp 65001");

    // Φόρτωση της βιβλιοθήκης Kernel32.dll
    HMODULE hModule = LoadLibrary("Kernel32.dll");
    if (hModule != NULL) {
        // Ανάκτηση της συνάρτησης GetTickCount64
        GETTICKCOUNT64 pGetTickCount64 = (GETTICKCOUNT64)GetProcAddress(hModule, "GetTickCount64");
        if (pGetTickCount64 != NULL) {
            // Υπολογισμός του χρόνου λειτουργίας συστήματος
            ULONGLONG systemUptime = pGetTickCount64();
            printf("Χρόνος λειτουργίας συστήματος: %llu milliseconds\n", systemUptime);
        }
        // Απελευθέρωση της βιβλιοθήκης
        FreeLibrary(hModule);
    }

    return 0;
}
