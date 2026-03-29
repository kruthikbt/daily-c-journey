

//  Write a Fuction to Calculate the area of circle,square and rectangle.

# include <stdio.h>
# include <math.h>

float circle(float r);
float  rectangle(float l,float b);
float square(float s);

int main() {
    float  r,l,b,s;
    printf("Enter the radius r:");
    scanf("%f",&r);
    printf("Enter the length  l:");
    scanf("%f",&l);
    printf("Enter the breadth  b:");
    scanf("%f",&b);
    printf("Enter the side s\n");
    scanf("%f",&s);

    float  c= circle(r);
    printf("The Area of Circle is:%f\n",c);

    float  n= rectangle(l,b);
    printf("The Area of Rectangle  is:%f\n",n);

    float  m= square(s);
    printf("The Area of Square is:%f\n",m);


}

float circle(float r){
    return 3.14*r*r;
}
float rectangle (float l,float b){
    return l*b;
}
float square(float s){
    return s*s;
}

