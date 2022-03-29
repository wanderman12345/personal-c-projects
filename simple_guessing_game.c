#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

   int main(){

      int tries = 5;
      int randomNumber = 0;
      time_t t;
      srand((unsigned)time(&t));
      randomNumber = rand() % 21;
      printf("This is a guessing game\nI have chosen a number between 0 and 20 which you must guess\n");

      while (tries > 0){
         int num = -1;
         printf("\n");
         printf("You have %d tries left\n", tries);
         while(!((num < 20) && (num > 0))){

            printf("Please Enter a number between 0 and 20\n");
            scanf("%d", &num);
         }
            //creates random number

            if(randomNumber == num){
               printf("\n");
               printf("Congragulations, you guessed it\n");
               break;
            }
            else if(num > randomNumber){
               printf("Sorry, %d is wrong. My number is less than that\n", num);
               --tries;
            }
            else{
               printf("Sorry, %d is wrong. My number is greater than that than that\n", num);
               --tries;
            }
      }
      printf("\n");
      printf("The number was %d\n", randomNumber);
      return 0;

   }




