

//  Write a Function to convert Celsius to farenheit entered by the user.
#include <stdio.h>
#include <math.h>

float   convertTemp(float c);
int main() {
    float c;
     printf("Enter the temperature value in celcius c:\n");
     scanf("%f",&c);

    float far = convertTemp(c);

     printf("The Entered Celcius Temperture in Frenhiet is:%f",far);
     return 0;

}

float  convertTemp(float c) {
   return c*9/5 +32;
    
}