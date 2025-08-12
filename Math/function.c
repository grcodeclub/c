#include  <stdio.h>;           
#include <math.h>;
#include <stdlib.h>;
    
#define M_PI 3.14159265358979323846
    
int main() {
    int x = 2;
    int y = 3;

    printf("Απόλυτη τιμή του x: %f\n",  fabs(x));
    printf("Απόλυτη τιμή του y: %f\n", fabs(y));
    printf("Το x υψωμένο στην δύναμη y: %d\n",  pow(x, y));
    printf("Τετραγωνική ρίζα του x: %f\n",  sqrt(x));
    printf("Η μητρική του x: %f\n",  sin(x));
    printf("Η συνημιτονική του x: %f\n", cos(x));
    printf("Στρογγυλοποίηση του x: %f\n", round(x));
    printf("Παράκρουση του x: %f\n", trunc(x));
    printf("Εκθετική του x: %d\n", exp(x));
    printf("Φυσικός λογάριθμος του x: %d\n", log(x));
    printf("Εκθετική του x με βάση 10: %d\n", pow(10, x));
        
    printf("Ο αριθμός πι: %d\n", M_PI);
    double radians = M_PI / 4;
    printf("Γωνία σε ακτίνιαν: %d\n", radians);
    printf("Η μητρική του x: %d\n", sin(radians));
    printf("Η συνημιτονική του x: %d\n", cos(radians));
    printf("Η εφαπτομενική του x: %d\n", tan(radians));
    printf("Αντίστροφος μητρικής του y: %d\n", asin(y));
    printf("Αντίστροφος συνημιτονικής του y: %d\n", acos(y));
    printf("Αντίστροφος εφαπτομενικής του y: %d\n", atan(y));
    return 0;
    }
