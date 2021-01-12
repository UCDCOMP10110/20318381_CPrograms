#include<stdio.h>
#define MAX_SIZE 1000



void Upper_Limit(int n);
void Upper_Limit(int n)
{


	int prime[n+1];
	//Loading the array with numbers from 1 to n
	for(int i = 1; i <= n; i++)
	{
		prime[i] = i;
	}
	//Start with least prime number, which is 2.
	//No need to check for numbers greater than square root of n.
	//They will be already marked.
	for(int i = 2; i*i <= n; i++)
	{
		if(prime[i] != -1)
		{
			//Mark all the multiples of i as -1.
			for(int j = 2*i; j <=n ; j += i)
				prime[j] = -1;
		}
	};
	
  

	for(int i=2; i <= n; i++){
	
		if(prime[i] != -1)
		{
			printf("%d ", i);
		}
	}


}


int main(void)
{

	
	int n;
	printf("Enter the upper limit:\n");
	 do {
      scanf("%d", &n);
    } while (n<3 || n>MAX_SIZE+2);
    Upper_Limit(n);
	

}