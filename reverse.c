#include<stdio.h>
#define Max_size 100
int main(void)
{
    char str1[Max_size], str2[Max_size];
    int i, k, j;
    scanf("%s", &str1);
    for(i=0; str1[i] != '\0'; i++ );
    j=i-1;
    for(k=0; k<=i; k++)
    {
        str2[k]=str1[j];
        j--;
    }
    for(k=0; k<i; k++)
        printf("%c", str2[k]);
    return 0;
}