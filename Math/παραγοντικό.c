#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num = 5;
    printf("Το παραγοντικό του %d είναι %d\n", num, factorial(num));
    return 0;
}
