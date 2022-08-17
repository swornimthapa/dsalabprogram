#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int n,i=0,temp,j=0,a[20];
	int choice=0;
	printf("\n\t\tMENUE");
	printf("\n\t\t1.ascending");
	printf("\n\t\t2.descending");
	printf("\nchose in which order do you want your elements to be sorted: ");
	scanf("%d",&choice);
	label:
	printf("\nEnter the size of the array: ");
	scanf("%d",&n);
	if(n>20)
	{
		printf("size of array should be equal or less than 20");
		goto label;
		exit(0);
	}
	printf("\nEnter %d elements in array: ",n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
	switch(choice)
	{
		
		case 1:
		
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-1-i;j++)
			{
				if(a[j]>a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		break;
		case 2:
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-1-i;j++)
			{
				if(a[j]<a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		break;
		case 3:
			printf("\ninvalid input");
			break;
		
	}
	printf("The elements sorted is: ");
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
	
	return 0;
}
