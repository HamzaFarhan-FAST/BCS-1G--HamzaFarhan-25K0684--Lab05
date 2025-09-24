#include <stdio.h>

int main(){

    int a, b ,c, discriminant;
    discriminant = 0;

    printf("We have to solve a quadratic equation: ax^2 + bx + c = 0\nWe have to find its Discriminant to find the nature of roots\nEnter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);

    discriminant = (b*b) - (4*a*c);
    if (discriminant == 0)
    {
        printf("The Equation has One Real Root");
    }
    else if (discriminant > 0)
    {
        printf("The Equation has Two Real Roots");
    }
    else printf("The Equation has Imaginary Roots");


    
    
}