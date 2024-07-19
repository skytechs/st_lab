#include<stdio.h>

int check(int day,int month)
{
	if((month==4||month==6||month==9||month==11)&&day==31)
		return 1;
	else
		return 0;
}

int isleap(int year)
{
	if((year%4==0&&100!=0)||year%400==0)
		return 1;
	else
		return 0;
}

int main()
{
	int day,month,year,tomday,tommonth,tomyear;
	char flag;
	d0
	{
		flag='y';
		printf("\nenter the today date in the format dd mm yyyy\n");
		scanf("%d %d %d",&day,&month,&year);
		tommonth=month;
		tomyear=year;
		tomday=day;
		if(day<1||day>31)
		{
			printf("value of day, not in the range of 1.........31\n");
			flag='n';
		}
		if(month<1||month>12)
		{
			printf("value of month, not in the range of 1.........12\n");
			flag='n';
		}
		else if(check(day,month))
		{
			printf("value of day, not in th range day<=31");
		}
		if(year<=1812||year>2015)
		{
			printf("value of year, not in the range of 1812.........2015\n");
			flag='n';
		}
		if(month==2)
		{
			if(isleap(year)&&day>28)
			{
				printf("invalid ddate input for leap year");
				flag='n';
			}
			else if(!(isleap(year))&&day>28)
			{
				printf("invalid date input for not a leap year");
				flag='n';
			}
		}
	}while(flag=='n')
	switch(month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:if(day<31)
				tomday=day+1;
			else
			{
				tomday=1;
				tommonth=month+1;
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:if(day<30)
				tomday=day+1;
			else
			{
				tomday=1;
				tommonth=month+1;
			}
			break;
		case 12:if(day<31)
				tomday=day+1;
			else
			{
				tomday=1;
				tommonth=1;
			}
			if(year==2015)
			{
				printf("the next day is out of boundary value of year");
				tomyear=year+1;
			}
			else
			{
				tomyear=year+1;
			}
			break;
		case 2:if(day<28)
				tomday=day+1;
			else if(isleap(year)&&day==28)
				tomday=day+1;
			else if(day==28||day==29)
			{
				tomday=1;
				tommonth=3;
			}
			break;
	}
	printf("Next day is:%d %d %d",tomday,tommonth,tomyear);
	return 0;
}	
