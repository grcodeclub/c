#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num = 6;
    printf("Ο αριθμός Fibonacci στη θέση %d είναι %d\n", num, fibonacci(num));
    return 0;
}
