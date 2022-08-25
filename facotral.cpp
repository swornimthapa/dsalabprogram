#include<iostream>
using namespace std;
int fac(int n)
{
	if(n==1)
	{
		return 1;
		
	}
	else
	{
		return (n * fac(n-1));
	}
}
int main()
{
	int n=0;
	cout<<"enter a number to find its factorial : ";
	cin>>n;
	cout<<"the factorial of "<<n<<" is :"<<fac(n);
	return 0;
}
