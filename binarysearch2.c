#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int n=0,l=0,h=0,i=0,mid;
	int a[20];
	int flag=0,key;
	label:
	printf("\nEnter the size of array: ");
	scanf("%d",&n);
	if(n>20)
	{
		printf("size of array should be equal or less than 20");
		goto label;
		exit(0);
	}
	h=n-1;
	printf("Enter %d sorted element in array: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the item to be searched: ");
	scanf("%d",&key);

	
	while(l<=h)
	{
		mid=(l+h)/2;
		if(a[mid]<key)
		{
			l=mid+1;
		}
		else if(a[mid]>key)
		{
			h=mid-1;
		}
		else
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("The search is successful\n");
		printf("The position is: %d",mid+1);
	}
	else
		printf("Search unsuccessful");
	return 0;
	
}
