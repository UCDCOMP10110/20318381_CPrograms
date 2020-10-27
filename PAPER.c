#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
  int c;
  int i;
  int randNum;
  int seed;
  int Pscore=0;
  int Cscore=0;



  printf("Enter a seed for the random number generator.\n");

  scanf("%d", &seed);

  srand(seed);



  for(i=0;i<10;i++)
  {
    printf("Please choose 1 for ROCK, 2 for PAPER or 3 for SCISSORS.\n");
    scanf("%d", &c);


    if((c<=0 )||(c>3) ){
        printf("Invalid number, please try again!\n");
      }

    randNum= rand()%3+1;
    printf("A random number between 1 and 3:%d\n", randNum);

    if(c == 1){
      if(randNum == 1){
        printf("User choice is ROCK.\n");
        printf("Computer choice is ROCK.\n");
        printf("It's a draw. Computer chose ROCK and User also chose ROCK.\n");
      }
      if(randNum == 2){
       printf("User choice is ROCK.\n");
       printf("Computer choice is PAPER.\n");
       printf("Computer wins because PAPER beats ROCK.\n");
       Cscore = Cscore + 1;
      }

       if(randNum == 3){
         printf("User choice is ROCK.\n");
         printf("Computer choice is SCISSORS.\n");
         printf("User wins because PAPER beats ROCK.\n");
         Pscore = Pscore + 1;
       }
    }

    if(c == 2) {
       if(randNum == 1){
         printf("User choice is PAPER .\n");
         printf("Computer choice is ROCK.\n");
         printf("User wins because PAPER beats ROCK.\n");
         Pscore = Pscore + 1;
       }
       if(randNum == 2){
         printf("User choice is PAPER.\n");
         printf("Computer choice is PAPER.\n");
         printf("It's a draw. Computer chose PAPER and User also chose PAPER.\n");
       }
       if(randNum == 3){
         printf("User choice is PAPER.\n");
         printf("Computer choice is SCISSORS.\n");
         printf("Computer wins because SCISSORS beats PAPER.\n");
         Cscore= Cscore + 1;
       }
     }

     if(c >= 3){
        if(randNum == 1){
         printf("User choice is SCISSORS.\n");
         printf("Computer choice is ROCK.\n");
         printf("Computer wins because ROCK beats SCISSORS.\n");
         Cscore = Cscore + 1;
       }

       if(randNum == 2){
         printf("User choice is SCISSORS.\n");
         printf("Computer choice is PAPER.\n");
         printf("User wins because SCISSORS beats PAPER.\n");
         Pscore = Pscore + 1;
       }

       if(randNum == 3){
         printf("User choice is SCISSORS.\n");
         printf("Computer choice is SCISSORS.\n");
         printf("It's a draw. Computer chose SCISSORS and User also chose SCISSORS.\n");
       }

     }
   }

  printf("In 10 games, computer won %d times and user won %d times.\n", Cscore, Pscore);

  return 0;
}
