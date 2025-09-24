#include <stdio.h>

int main(){

    int age;

    printf("Enter your age please: ");
    scanf("%d", &age);

    if(age < 5){

        printf("Freee");

    }
    else if (age > 65)
    {
        printf("Discount");
    }
    else printf("Standard");

    return 0;
    
        

    
    







}