#include <stdio.h>

void bubbleSort(int array[], int N) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            // Ανταλλαγή αριθμών αν είναι σε λάθος σειρά
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
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
    bubbleSort(array, N);

    printf("Ο ταξινομημένος πίνακας είναι:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
