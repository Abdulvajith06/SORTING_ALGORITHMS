#include<stdio.h>
#include<math.h>

int Insertion(int a[],int n)
{
	int i,j,k;
	for(i=1;i<n;i++)
	{
		k=a[i];
		j=i-1;
		while(j>=0 && a[j]>k)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=k;
	}
}

int SortedArray(int a[],int n)
{
	int i;
	printf("The sorted Array is:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
}

int main()
{
	int a[50],n;
	printf("Enter the array Limit :");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	Insertion(a,n);
	SortedArray(a,n);
	
	return 0;
}
