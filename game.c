#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(){
int secret_number= 5;
int guesses;
int guesscount=0;
int guesslimited = 3;
int outofguesses = 0;/*This code tells us if we are out guesses*/

while(guesses != secret_number && outofguesses == 0 ){
  if(guesscount<guesslimited){
     printf("Enter a number:\n");
     scanf("%d", &guesses);
     guesscount++;
   }
}


if(outofguesses == 1){
printf("You are out of guesses, Try later!\n");
}
else 
{
printf("Congratulations, You won\n");
}
return 0;

}
