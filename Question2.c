#include <stdio.h>

int main(){

    int power;
    char color;


    printf("Power Status: ");
    scanf("%d", &power);

    if(power == 0){

        printf("Signal Off");

    }
    else if(power == 1)
    {
      printf("Light Color: "); 
      scanf(" %c", &color);

      if (color == 'R' || color == 'r')
      {
        printf("Stop");
      }
      else if (color == 'Y' || color == 'y')
      {
        printf("Caution");
      }
      else if (color == 'G' || color == 'g')
      {
        printf("Go");
      }
      else return 0;


    }

    
    
        

    
    







}