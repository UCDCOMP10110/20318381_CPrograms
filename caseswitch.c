#include<stdio.h>



int main(void){

int power_watts;

printf("Please insert the amount of watts required: ");
scanf("%d", &power_watts);
int life;
switch(power_watts){

case 25:
printf("life = 500707");
break;
case  40:
case  60:
printf("life = 2000");
break;
case 75:
case 100:
printf("life =1500");
break;
default:
printf("life = 0");


}





return 0;


}
