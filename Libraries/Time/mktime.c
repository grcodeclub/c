#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main() {


    struct tm timeInfo;
    time_t timestamp;

    // Ορισμός των πεδίων της δομής struct tm
    timeInfo.tm_sec = 0;         // Δευτερόλεπτα
    timeInfo.tm_min = 30;        // Λεπτά
    timeInfo.tm_hour = 12;       // Ώρες
    timeInfo.tm_mday = 1;        // Ημέρα του μήνα (1-31)
    timeInfo.tm_mon = 0;         // Μήνας (0-11, 0 = Ιανουάριος)
    timeInfo.tm_year = 122;      // Έτος - 1900

    // Μετατροπή της δομής struct tm σε χρονικό αριθμό
    timestamp = mktime(&timeInfo);

    // Έλεγχος επιτυχίας της μετατροπής
    if (timestamp != (time_t)-1) {
        printf("Ο χρονικός αριθμός (timestamp) είναι: %ld\n", timestamp);
    } else {
        printf("Η μετατροπή απέτυχε.\n");
    }
  
    return 0;
}
