#include<stdio.h>

int main()
{
	int a[30],i,n,element,low=0,high,mid;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	printf("Enter array elements");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	high=n-1;
	printf("Enter the element tobe searched\n");
	scanf("%d",&element);
	while(low<=high)
	{
		mid=(low+high)/2;
		if(element==a[mid])
		{
			printf("Key found\n");
			return 0;
		}
		else if(element>a[mid])
			low=mid+1;
		else
			high=mid+1;
	}
	printf("element not found\n");
	return 0;
}
