#include <stdio.h>
int main() {

    double number;
    char alphabet;

    printf("Enter input values: ");
    scanf("%lf %c", &number, &alphabet);

    printf("Number: %lf", number);
    printf("\nCharacter: %c", alphabet);

    return 0;
}