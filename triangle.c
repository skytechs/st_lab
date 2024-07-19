#include<stdio.h>

int main()
{
	int a, b, c, c1,c2,c3;
	do
	{
		printf("Enter the sides of triangle");
		scanf("%d %d %d",&a,&b,&c);
		c1=((a>=1)&&(a<=10));
		c2=((b>=1)&&(b<=10));
		c3=((c>=1)&&(c<=10));
		if(!c1)
			printf("Value of a is out of range");
		if(!c2)
		 	printf("Value of b is out of range");
		if(!c3)
		  	printf("Value of c is out of range");
	}
	while(!c1 || !c2 || !c3);
	if((a+b)>c&&(b+c)>a&&(c+a)>b)
	{
		if((a==b)&&(b==c))
			printf("triangle is equilateral");
		else if(a!=b&&b!=c&&c!=a)
			printf("triangle is Scalene");
		else
			printf("triangle is Isocelus");
	}
	else
		printf("Triangle cannot be formed");
	return 0;
}
