#include<stdio.h>
int swap(int *a,int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
int Select(int a[],int n)
{
	//initialise i,j,temp for using in the loop
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		//let assume 1st element will be in temp (that is smallest);
		temp=i;
		for(j=i+1;j<n;j++)
		{
			//now check with next element if it is small then that will be in temp;
			if(a[j]<a[temp])
			{
				temp=j;
			}
			//loop will continues to swap;
		}
		// if a[j] is less than a[i] then a[j] will be in 1st position;
		swap(&a[temp],&a[i]);
	}
}

int Display(int a[],int n)
{
	int i;
	printf("\n");
	printf("The sorted array: ");
	for(i=0;i<n;i++)
	{
		//Finally Printing / Display the Sorted array;
		printf("%d",a[i]);
	}
	printf("\n");
}
int main()
{
	//initialise the vatriable n and array;
	int a[50],n;
	//get the limit for array values and array elements;
	printf("Enter the array limit");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	//call the Select method for SELECTION SORTING
	Select(a,n);
	//Display method for Finally Print the array values;
	Display(a,n);
	
	return 0;
}
