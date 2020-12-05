#include <stdio.h>
#define MAX_STR_LEN 256
int main(void)
{
  char perm[] = "qjczieaungsdfxmphybklortvw";
  char msg[MAX_STR_LEN+1];
  fgets(msg, MAX_STR_LEN, stdin);
int j=0;
  int i = 0;
  for(i=0; msg[i] !='\0'; i++) {
    if(msg[i] >= 'a' && msg[i]<='z'){
        for(j=0; j<26;j++){
            if(msg[i] == perm[j]){
                msg[i]=j+97;
                break;
            }
        }
    }
    if(msg[i]>= 'A' && msg[i] <='Z'){
        msg[i] = msg[i]+32;
        for(j=0; j<26;j++){
            if(msg[i] == perm[j]){
                msg[i] = j+97;
                msg[i]=msg[i]-32;
                break;
            }
        }
    }
    }
    
 
 printf("%s", msg);
 return 0;
}

