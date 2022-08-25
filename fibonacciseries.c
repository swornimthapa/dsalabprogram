#include<stdio.h>
int Fibonacci(int);
 int main()
{
 	int n,c=0,i=0;
 	printf("how many term do you want in your fibonacci series?"); 	 
  	scanf("%d",&n);   //n=5
 	printf("Fibonacci series\n"); 
 	for ( c = 1 ; c <= n ; c++ )  //4
    {
      printf("%d\t", Fibonacci( i));
      i++;  //3
   }
 	return 0;
}
int Fibonacci(int n)
{
   if ( n == 0 )
   {
   		return 0;
   }
    else if ( n == 1 )
	{
    	return 1;
	}
    else
    {
    	return ( Fibonacci(n-1) + Fibonacci(n-2));
	}
} 

