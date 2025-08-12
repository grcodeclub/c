#include <stdio.h>

void selectionSort(int array[], int N) {
    for (int i = 0; i < N - 1; i++) {
        int minIndex = i;

        // Βρίσκουμε τον ελάχιστο αριθμό στον υπόλοιπο πίνακα
        for (int j = i + 1; j < N; j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }

        // Ανταλλαγή του ελάχιστου αριθμού με τον πρώτο αριθμό του υπόπινακα
        int temp = array[minIndex];
        array[minIndex] = array[i];
        array[i] = temp;
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
    selectionSort(array, N);

    printf("Ο ταξινομημένος πίνακας είναι:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
