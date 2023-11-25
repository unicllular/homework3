#include <stdio.h>
#include <stdlib.h>

int main()
{
   float weight, height;
   printf("Enter your weight in kilograms: ");
   scanf("%f", &weight);
   printf("Enter your height in meters: ");
   scanf("%f", &height);
   float BMI = weight/(pow(height, 2));
   if (BMI < 18.5){
        printf("Underweight");
    }else if (BMI >= 18.5 && BMI <= 24.9){
        printf("Normal Weight");
    }else if (BMI >= 25 && BMI <= 29.9){
        printf("Overweight");
    }else if (BMI >= 30 && BMI <=34.9){
        printf("Obesity");
    }else {
        printf("Extreme Obesity");
    }

    return 0;
}
