#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    int* array;

    printf("Εισαγάγετε το μέγεθος του πίνακα: ");
    scanf("%d", &size);

    // Δυναμική εκχώρηση μνήμης με τη χρήση της συνάρτησης malloc
    array = (int*) malloc(size * sizeof(int));
    
    if (array == NULL) {
        printf("Σφάλμα κατά τη δυναμική εκχώρηση μνήμης.\n");
        return 1;
    }

    printf("Εισαγάγετε τα στοιχεία του πίνακα:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Τα στοιχεία του πίνακα είναι:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    // Απελευθέρωση της δυναμικά εκχωρηθείσας μνήμης
    free(array);

    return 0;
}
