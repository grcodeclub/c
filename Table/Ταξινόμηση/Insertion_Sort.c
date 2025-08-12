#include <stdio.h>

void insertionSort(int array[], int N) {
    for (int i = 1; i < N; i++) {
        int key = array[i];
        int j = i - 1;

        // Μετακινούμε τους αριθμούς μεγαλύτερους του key προς τα δεξιά
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        
        array[j + 1] = key; // Τοποθετούμε τον key στη σωστή θέση
    }
}

int main() {
    int N;
    printf("Δώστε το μέγεθος του πίνακα: ");
    scanf("%d", &N);

    int array[N];
    printf("Δώστε τους αριθμούς του πίνακα:\n");
    for (int i = 0; i < N; i++) {
        printf("Αριθμός %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Ταξινόμηση του πίνακα
    insertionSort(array, N);

    printf("Ο ταξινομημένος πίνακας είναι:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
