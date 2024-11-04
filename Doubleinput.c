#include <stdio.h>
int main() {
double number;
char alphabet;

printf("Enter Double Input: ");
scanf("%lf", &number);

printf("Enter Character Input: ");
scanf("\n%c", alphabet);

printf("Number: %lf", number);
printf("\n%c", alphabet);

    return 0;
}