#include<stdio.h>
#define M 256
#include<stdbool.h>
//m is used to manifest some lowercase words or sentences in Upper case//

int main(void){
char Sentence[M];//This array will hold the word/sentence essential//



fgets(Sentence, M , stdin);



int i=0;
char ch;
while(i < M  && Sentence[i] != '\0' ){
    ch = Sentence[i];
    if( (ch >= 'a' && ch <= 'z' )){
    Sentence[i] = (Sentence[i] - 32);

}



  printf("%c", Sentence[i]);
i++;

}
//This do-while loop condition is checked last in this loop//


return 0;

}
