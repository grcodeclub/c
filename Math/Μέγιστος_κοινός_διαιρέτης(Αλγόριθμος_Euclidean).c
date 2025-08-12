 // Υπολογισμός του μέγιστου κοινού διαιρέτη (ΜΚΔ) με χρήση του αλγορίθμου του Euclidean
#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int num1 = 48, num2 = 18;
    printf("Ο ΜΚΔ των %d και %d είναι %d\n", num1, num2, gcd(num1, num2));
    return 0;
}
