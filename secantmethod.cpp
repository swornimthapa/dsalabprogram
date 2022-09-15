#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
//#define e 2.718281
#define f(x) pow(x,3)-2*x-5
using namespace std;
int main()
{
	double x0,x1,y0=0,y1=0,error,f0,f1;
	int step=3;
	 cout<< setprecision(5)<< fixed;
	cout<<"enter the first guess: ";
	cin>>x0;
	cout<<"enter the second guess: ";
	cin>>x1;
	cout<<"enter the tolerable error: ";
	cin>>error;
	cout<<"ITERATION : 1"<<"\t\t x= "<<x0<<endl;
	cout<<"ITERATION : 2"<<"\t\t x= "<<x1<<endl;
	do
	{
		f0=f(x0);
		//cout<<f0<<endl;
		f1=f(x1);
	//	cout<<f1;
		y0=y1;
		y1=x1-((x1-x0)*f1)/(f1-f0);
		
		x0=x1;
		f0=f(x0);
	//	cout<<f0<<endl;
	//	cout<<x0<<endl;
		x1=y1;
		f1=f(y1);
	//	cout<<f1<<endl;
	//	cout<<x1<<endl;
		
		cout<<"ITERATION : "<<step<<"\t\t x= "<<y1<<endl;
		step++;
		
	}while((fabs(y1-y0)/y1)>=error);
	return 0;
}
