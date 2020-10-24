#include<stdio.h>
#include<math.h>
int main(void)
{
  double p;
  double r;
  double a;
  double k = 12;
  double n;
  int v;
  printf("Which value would you like to compute: 1) Amount 2) Principal 3)  Rate 4) Number of Years\n");
  printf("Select either 1, 2, 3 or 4.\n");
  scanf("%d", &v);

  if( (v < 1)|| (v > 4))
  {
    printf("Invalid option.");
  }



    if(v==1)
    {

      printf("Please enter the principal:\n");
      scanf("%lf", &p);
      if(p<0)
      {
        printf("Invalid Principal.\n");
        return -1;
      }


      printf("Please enter the rate:\n");
      scanf("%lf", &r);
      if(!(r>0) && (r<=100))
       {
         printf("Invalid rate.\n");
         return -1;
       }


      printf("Please enter the number of years:\n");
       scanf("%lf", &n);
       if(!(n > 0))
       {
        printf("Invalid number of years.\n");
        return -1;
       }


       a = (p * pow(1 +(r /(100 * k)), n * k) );
       printf("The amount is %.2lf\n", a);
       return 0;
    }


    if(v==2)
    {
      printf("Please enter the amount:\n");
      scanf("%lf", &a);
      if(a<0)
     {
       printf("Invalid amount.");
       return -1;
     }

      printf("Please enter the rate:\n");
      scanf("%lf", &r);
      if(!(r>=0) && (r<=100))
        {
         printf("Invalid rate.\n");
         return -1;
         }

        printf("Please enter the number of years:\n");
        scanf("%lf", &n);
         if(!(n > 0))
         {
          printf("Invalid number of years.\n");
          return -1;
         }

       p = a/pow((1 + r /(100 * k)) ,  n * k);

       printf("The principal is %.2lf\n", p);
       return 0;
    }

    if(v==3)
    {
      printf("Please enter the amount:\n");
      scanf("%lf", &a);
      if(a<0)
     {
       printf("Invalid amount.");
       return -1;
     }

      printf("Please enter the principal:\n");
      scanf("%lf", &p);
      if(p<0)
      {
        printf("Invalid Principal.\n");
        return -1;
      }

      printf("Please enter the number of years:\n");
      scanf("%lf", &n);
      if(!(n > 0))
      {
       printf("Invalid number of years.\n");
       return -1;
      }

      r = 100*k*exp((log(a)-log(p))/(n*k))-100*k;

       printf("The rate is %.2lf\n", r);
       return 0;

    }
    if(v==4)
    {
      printf("Please enter the amount:\n");
      scanf("%lf", &a);
      if(a<0)
     {
       printf("Invalid amount.");
       return -1;
     }


      printf("Please enter the principal:\n");
      scanf("%lf", &p);
      if(p<0)
      {
        printf("Invalid Principal.\n");
        return -1;
      }

      printf("Please enter the rate:\n");
      scanf("%lf", &r);
      if(!(r>=0) && (r<=100))
        {
         printf("Invalid rate.\n");
         return -1;
         }

      n = (log(a / p) / log(1 + r / (100 * k)) / k);

      printf("The number of years is %.2lf\n", n);
       return 0;
    }
  return 0;

}
 
