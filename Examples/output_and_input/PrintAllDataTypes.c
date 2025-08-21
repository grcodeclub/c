// Παράδειγμα που εκτυπώνει όλους τους τύπους δεδομένων.

#include  <stdio.h>
int main() {
    int integerNumber = 42;
    float floatNumber = 3.14159;
    double doubleNumber = 2.71828;
    char character = 'A';
    char string[] = "Hello, World!";          
    printf("Ακέραιος: %d\n", integerNumber);
    printf("Δεκαδικός αριθμός (float): %f\n", floatNumber);
    printf("Δεκαδικός αριθμός (double): %lf\n", doubleNumber);
    printf("Χαρακτήρας: %c\n", character);
    printf("Συμβολοσειρά: %s\n", string);          
    return 0;
}
