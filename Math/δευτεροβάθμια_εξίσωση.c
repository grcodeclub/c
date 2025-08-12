#include <stdio.h>
#include <math.h>

int solveQuadraticEquation(double a, double b, double c, double *solution1, double *solution2, int *type) {
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        // Δύο πραγματικές ρίζες
        *solution1 = (-b + sqrt(discriminant)) / (2 * a);
        *solution2 = (-b - sqrt(discriminant)) / (2 * a);
        *type = 0;
        return 0;
    } else if (discriminant == 0) {
        // Μία διπλή ρίζα
        *solution1 = -b / (2 * a);
        *type = 1;
        return 0;
    } else {
        // Μιγαδικές ρίζες
        *type = 2;
        return 1;
    }
}

int main() {
    double a, b, c, solution1, solution2;
    int type;

    printf("Δώστε τον συντελεστή a: ");
    scanf("%lf", &a);
    printf("Δώστε τον συντελεστή b: ");
    scanf("%lf", &b);
    printf("Δώστε τον συντελεστή c: ");
    scanf("%lf", &c);

    int result = solveQuadraticEquation(a, b, c, &solution1, &solution2, &type);

    if (result == 0) {
        if (type == 0) {
            printf("Λύσεις: x1 = %lf, x2 = %lf\n", solution1, solution2);
        } else if (type == 1) {
            printf("Διπλή ρίζα: x = %lf\n", solution1);
        }
    } else if (result == 1) {
        printf("Μιγαδικές ρίζες\n");
    }

    return 0;
}
