#include<stdio.h>

//NO.OF.COMPARESIONS=N*(N-1)/2;
//NO.OF.PASSES=N-1;
int Bubble(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}

int SortedArray(int a[],int n)
{
	int i;
	printf("\n");
	printf("Sorted Array is:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
int main()
{
	int a[50],n;
	printf("Enter the Limit for Array Elements:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	Bubble(a,n);
	SortedArray(a,n);
	
	return 0;
	
}
