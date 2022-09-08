#include<iostream>
using namespace std;
towerOfhanoi(int n,char A,char B,char C)
{
	if(n==1)
	{
		cout<<"move 1st disk form "<<A<<" to "<<C<<endl;
	//	return;
	}
	else{
		towerOfhanoi(n-1,A,C,B);
		cout<<"move "<<n<<" disk from "<<A<<" to "<<C<<endl;
		towerOfhanoi(n-1,B,A,C);
	}
}
int main()
{
	int num=0;
	cout<<"how many disk do you want in your tower of hanoi? :";
	cin>>num;
	towerOfhanoi(num,'O','I','D');
	return 0;
}

