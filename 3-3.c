#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;
    printf("Enter coefficients: ");
    scanf("%f%f%f", &a, &b, &c);
    int delta = pow(b, 2) - (4 * a * c);
    if (delta < 0){
        printf("no roots!");
    }else if (delta == 0){
        printf(" x = %f", -b/(2*a));

    }else {
        printf("x1 = %f, ", (-b+sqrt(delta))/(2*a));
        printf("x2 = %f, ", (-b-sqrt(delta))/(2*a));
    }

    return 0;
}
