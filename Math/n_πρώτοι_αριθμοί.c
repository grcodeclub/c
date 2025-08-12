#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n = 10;
    int count = 0;
    int num = 2;

    printf("Οι πρώτοι %d πρώτοι αριθμοί είναι:\n", n);
    while (count < n) {
        if (is_prime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    return 0;
}
