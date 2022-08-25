#include<stdio.h>
int Fibonacci(int);
 int main()
{
 	int n;
 	printf("which term do you want to print from fibonacci series?"); 	 
  	scanf("%d",&n);   //n=5
 	printf("your %dth term Fibonacci series is= ",n); 
 //	for ( c = 1 ; c <= n ; c++ )  //4
 //   {
      printf("%d\t", Fibonacci( n));
    //  i++;  //3
 //   }
 	return 0;
}
int Fibonacci(int n)
{
   if ( n == 1 )
   {
   		return 0;
   }
    else if ( n == 2 )
	{
    	return 1;
	}
    else
    {
    	return ( Fibonacci(n-1) + Fibonacci(n-2));
	}
} 

