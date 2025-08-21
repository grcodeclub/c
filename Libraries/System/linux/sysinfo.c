/*Για τα Windows, το αρχείο sys/sysinfo.h δεν είναι διαθέσιμο*/
#include <stdio.h>
#include <sys/types.h>
#include <sys/sysinfo.h>

int main() {
    struct sysinfo system_info;
    printf("Συνολική φυσική μνήμη: %lu\n", system_info.totalram);
    printf("Διαθέσιμη φυσική μνήμη: %lu\n", system_info.freeram);
    printf("Συνολική εικονική μνήμη: %lu bytes\n", system_info.totalswap);
    printf("Διαθέσιμη εικονική μνήμη: %lu bytes\n", system_info.freeswap);
    printf("Μέγιστο μέγεθος επεκτάσιμης μνήμης: %lu bytes\n", system_info.maxram);
    printf("Αρχιτεκτονική CPU: %d\n", system_info.type);
    printf("Αριθμός επεξεργαστών: %d\n", system_info.procs);
    printf("Αριθμός επεξεργαστών που είναι ενεργοί αυτή τη στιγμή: %d\n", system_info.num_online);
    printf("Αριθμός επεξεργαστών που είναι διαθέσιμοι αυτή τη στιγμή: %d\n", system_info.num_possible);
    printf("Αριθμός φορτίου: %d\n", system_info.loads[0]);
    printf("Αριθμός φορτίου (5 min): %ld\n", system_info.loads[1]);
    printf("Αριθμός φορτίου (15 min): %ld\n", system_info.loads[2]);
    printf("Συνολική χρονική διάρκεια λειτουργίας του συστήματος: %ld seconds\n", system_info.uptime);
    return 0;
}
