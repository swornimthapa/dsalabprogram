#include<iostream>
#include<math.h>
using namespace std;
int precedence(char ch)
{
	switch(ch)
	{
		case '/': 
			return 4;
			break;
		case '*':
			return 3;
			break;
		case '+' :
			return 2;
			break;
		case '-':
			return 1;
			break;
		case ')':
			return 0;
			break;
	}
}

int main()
{
	int optop=-1,pretop=-1,length=0,i=0,len=0;
	string infix;
	char opstack[30],prestack[30];
	cout<<"Enter a valid infix expression with (+,*,/,-) : ";
	getline(cin,infix);
	length=infix.length();
	for(i=length-1;i>=0;i--)
	{
		if(infix[i]==')')
		{
			optop++;
			opstack[optop]=infix[i];
		}
		else if(isalpha(infix[i]))
		{
		//	len++;
			pretop++;
			prestack[pretop]=infix[i];
		}
		else if(infix[i]=='(')
		{
			while(opstack[optop]!=')')
			{
				pretop++;
				prestack[pretop]=opstack[optop];
				optop--;
			}
			optop--;
		}
		else
		{
			if(optop==-1)
			{
				
			//	len++;
				optop++;
				opstack[optop]=infix[i];
			}
			else
			{
				if(precedence(opstack[optop])>precedence(infix[i]))
				{
				//	len++;
					pretop++;
					prestack[pretop]=opstack[optop];
					//optop--;
					opstack[optop]=infix[i];
				}
				else
				{
					optop++;
					opstack[optop]=infix[i];
				}
			//	
				
			}
		}
	
	
	}

//	cout<<optop;
	while(optop!=-1)
	{
	//	len++;
		pretop++;
		prestack[pretop]=opstack[optop];
		optop--;
	}
	for(i=pretop;i>=0;i--)
	{
		 //cout<<infix<<endl;
		cout<<prestack[i];
		//pretop--;
	}
	return 0;
}
