#include<stdio.h>



int main(void){

int grades_result_english;
int grades_result_maths;
int grades_result_irish;
printf("Please take into account that grades should be rounded off to the nearest whole number ");
printf("\n");
printf("Please insert the grade in English in order to get advice on it:\n ");
scanf("%d", &grades_result_english);

switch(grades_result_english){
case 0:
printf("You have failed , start studying and asking teachers for help and guide");
break;
case 40:
printf("Congratulations, you passed english,but take into account that you will need to start improving therefore identify your  your weak spots and try and work on it as you have barely passed and english is meant to be easy even it is boring");
break;
case  50:
case  60:
printf("Well, done you did well, you are half way there to getting that 100 percent therefore keep on studying and grinding");
break;
case 70:
case 80:
case 90:
printf("Excellent result");
break;
case 100:
printf("Brilliant!");
break;
default:
printf("KEEP ON PRACTICING");
break;


}
printf("\n");
printf("Please insert the grade in Maths order to get advice on it:\n ");
scanf("%d", &grades_result_maths);
switch(grades_result_maths){
case 0:
printf("You have failed , start studying and asking teachers for help and guide");
break;
case 40:
printf("Congratulations, you passed english,but take into account that you will need to start improving therefore identify  your weak spots and try and work on it as you have barely passed and english is meant to be easy even  it is boring");
break;
case  50:
case  60:
printf("Well, done you did well, you are half way there to getting that 100 percent therefore keep on studying and grinding");
break;
case 70:
case 80:
case 90:
printf("Excellent result");
break;
case 100:
printf("Brilliant!");
break;
default:
printf("KEEP ON PRACTICING");
break;

}
printf("\n");
printf("Please insert the grade in Irish order to get advice on it:\n ");
scanf("%d", &grades_result_irish);
switch(grades_result_irish){
case 0:
printf("You have failed , start studying and asking teachers for help and guide");
break;
case 40:
printf("Congratulations, you passed english,but take into account that you will need to start improving therefore identify your weak spots and try and work on it as you have barely passed and english is meant to be easy even  it is boring");
break;
case  50:
case  60:
printf("Well, done you did well, you are half way there to getting that 100 percent therefore keep on studying and grinding");
break;
case 70:
case 80:
case 90:
printf("Excellent result");
break;
case 100:
printf("Brilliant!");
break;

}




return 0;


}
