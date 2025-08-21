#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main() {

    // Αλλαγή της κωδικοποίησης σε 1253 ("Windows-1253" ή "Greek Windows")
    // system("chcp 1253"); 
    // Αλλαγή της κωδικοποίησης σε UTF-8
     system("chcp 65001");
     

clock_t start, end;
    double cpu_time_used;

    // Έναρξη της μέτρησης του χρόνου
    start = clock();

    // Το τμήμα κώδικα για το οποίο θέλουμε να μετρήσουμε τον χρόνο εκτέλεσης
    for (int i = 0; i < 1000000; i++) {
        // Εκτέλεση κάποιων εντολών
    }

    // Λήξη της μέτρησης του χρόνου
    end = clock();

    // Υπολογισμός του συνολικού χρόνου εκτέλεσης
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    // Εκτύπωση του συνολικού χρόνου εκτέλεσης
    printf("Ο συνολικός χρόνος εκτέλεσης ήταν: %f δευτερόλεπτα.\n", cpu_time_used);

  
    return 0;
}
