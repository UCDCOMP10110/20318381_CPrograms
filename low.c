#include <stdio.h>

int main(void) {
    double first,second,third,four;

    double w, x, y, z;
    /* you may need some extra variables - but NO arrays please! */

    /* Do not change the following input statement */
    scanf("%lf%lf%lf%lf", &w,&x,&y,&z);

    /* Enter your solution here */
   /*Checks if the Z is the the fourth variable*/
  if((z<=x)&&(z<=y)&&(z<=w)){
    four = z;
  }
  /*We can observe the we are trying to find if the second variable is z*/
  if(((z>=w) && (z>=x) && (z<=y)) || ((z>=w) && (z<=x) && (z>=y)) || ((z<=w) && (z>=x) && (z>=y)))
  {
     second = z;
  }

  if((z>=x)&&(z>=y)&&(z>=w)){
    first= z;
  }

  if(((z>=w)&&(w<=x)&&(w<=y)) || ((w<= z)&& (w>=x)&&(w<=y)) || ((w<=z)&&(w<=x)&&(w>=y)))
  {
      third = z;
  }


  if(((w>=z)&&(w<=x)&&(w<=y)) || ((w<= z)&& (w>=x)&&(w<=y)) || ((w<=z)&&(w<=x)&&(w>=y)))
  {
      third = w;
  }

  if((w>=x)&&(w>=y)&&(w>=z)){
      first = w;
  }

    if((w<=z)&&(w<=y)&&(w<=x)){
    four = w;
  }

  if(((w>=z) && (w>=x) && (w<=y)) || ((w>=z) && (w<=x) && (w>=y)) || ((w<=z) && (z>=x) && (z>=y)))
  {
     second = w;
}



  if((x<=z)&&(x<=y)&&(x<=w)){
    four = x;
  }

  if(((x>=w) && (x>=z) && (z<=y)) || ((x>=w) && (x<=z) && (z>=y)) || ((x<=w) && (x>=z) && (z>=y)))
  {
     second = x;

  }

  if(((x>=z)&&(x<=w)&&(x<=y)) || ((x<= z)&& (x>=w)&&(x<=y)) || ((x<=z)&&(x<=w)&&(x>=y)))
  {
      third = x;
  }

  if((x>=w)&&(x>=y)&&(x>=z)){
      first = x;
  }




  if((y<=x)&&(y<=z)&&(y<=w)){
    four = y;
  }

  if(((y>=w) && (y>=x) && (y<=z)) || ((y>=w) && (y<=x) && (y>=z)) || ((y<=w) && (y>=x) && (y>=z)))
  {
     second = y;
  }

     if((y>=x)&&(y>=w)&&(y>=z)){
         first = y;
     }
     if(((y>=z)&&(y<=w)&&(y<=x)) || ((y<= z)&& (y>=w)&&(y<=x)) || ((y<=z)&&(y<=w)&&(y>=x)))
     {
         third = y;
     }



    /* Do not change the following output statement */
    printf("%.1lf %.1lf %.1lf %.1lf\n",first, second, third, four);
    /*Prints out the numbers*/
    return 0;
}
