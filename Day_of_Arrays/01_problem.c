// Write a program to print the price of 3 products with gst.

#include <stdio.h>
int main() {
    float  price[3];
        printf("Enter the price of 3 items: ");
        scanf("%f",&price[0]);
        scanf("%f",&price[1]);
        scanf("%f",&price[2]);

        printf("Total price of First Item is :%f\n",price[0] + price[0]*0.18);
        printf("Total price of second Item is :%f\n",price[1] + price[1]*0.18);
        printf("Total price of Third Item is :%f\n",price[2] + price[2]*0.18);

        return 0;
}