#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y, z;
    printf("Enter the length of the sides: ");
    scanf("%f%f%f", &x, &y, &z);
    if (x+y>z && x+z>y && y+z>x){
        printf("Possible.");
    }else {
        printf("Not possible.");
    }
    return 0;
}
