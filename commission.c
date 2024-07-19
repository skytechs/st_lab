#include<stdio.h>
#include<stdlib.h>

int main()
{
	int locks,stocks,barrels,tsales;
	float commission;
	printf("Enter the total number number of locks");
	scanf("%d",&locks);
	printf("Enter the total number number of stocks");
	scanf("%d",&stocks);
	printf("Enter the total number number of barrels");
	scanf("%d",&barrels);
	if((locks<=0)||(locks>70)||(stocks<=0)||(stocks>80)||(barrels<=0)||(barrels>90))
	{
		if((locks<=0)||(locks>70))
		{
			printf("Locks out of range\n");
		}
		if((stocks<=0)||(stocks>80))
		{
			printf("Stocks out of range\n");
		}
		if((barrels<=0)||(barrels>90))
		{
			printf("Barrels out of range\n");
		}
		exit(0);
	}
	tsales=(locks*45)+(stocks*30)+(barrels*25);
	if(tsales<=1000)
	{
		commission=0.10*tsales;
	}
	else if(tsales<1800)
	{
		commission=0.10*1000;
		commission=commission+(0.15*(tsales-1000));
	}
	else
	{
		commission=0.10*1000;
		commission=commission+(0.15*800);
		commission=commission+(0.20*(tsales-1800));
	}
	printf("the total sales is %d and the commision is %f",tsales,commission);
	return 0;
}
