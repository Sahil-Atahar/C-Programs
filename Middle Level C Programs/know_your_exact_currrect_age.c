#include <stdio.h>
#include <conio.h>

int isleapyear(int year) {
	if(year%400==0)
	return 0;
	else if(year%100 == 0)
	return 1;
	else
	return 0;
	}
	
int getdaysinmonth(int month,int year) 
{
	switch(month)
	{
		case 1: 
		return 31;
		case 2: {
		if (isleapyear(year) == 0)
		return 29;
		else 
		return 28;}
		break;
		case 3: 
		return 31;
		case 4: 
		return 30;
		case 5: 
		return 31;
		case 6: 
		return 30;
		case 7: 
		return 31;
		case 8: 
		return 31;
		case 9: 
		return 30;
		case 10: 
		return 31;
		case 11: 
		return 30;
		case 12: 
		return 31;				
	}
		}
		
int main()
{
	//Declaring variables 
	int DOBday,DOBmonth,DOByear,presentday,presentmonth,presentyear,i;
	int totaldays = 0;
	int totalmonth =0,totalyears=0;
	//Taking user DOB
	printf("Enter your DOB using space: ");
	scanf("%d%d%d",&DOBday,&DOBmonth,&DOByear);
	
	//Taking current date
	printf("Enter current date using space: ");
	scanf("%d%d%d",&presentday,&presentmonth,&presentyear);
	
        //calculating the year difference
	for( i =DOByear+1; i < presentyear; i++) {
	totalyears++;
		}
	//calculating the months differences
	if(presentyear !=DOByear) { /* present year and DOB year will be same then this code will be execute. otherwise else
		statement  will be execute*/
	for( i =DOBmonth +1 ; i <= 12; i++) {
	totalmonth++; 
	}
	for(i = 1; i < presentmonth; i++) {
	totalmonth++;
	}
	}
	else {
		for( i = DOBmonth +1 ; i < presentmonth; i++) {
	totalmonth++; 
	}
		}
	//calculting remaning days
	totaldays += (getdaysinmonth(DOBmonth, DOByear) - DOBday)+ presentday;
	
	/*Condition if days is greater than monthdays then increase month */
	if(totaldays >= getdaysinmonth(DOBmonth, DOByear)) {
		totalmonth++;
		totaldays  =  totaldays - getdaysinmonth(DOBmonth,DOByear);
		}
	else
	{
	}
	/*Condition if momth is greater then or equal to 12 then increase year*/
	 if(totalmonth >= 12 ) {
		totalyears++;
		totalmonth = totalmonth - 12;
		}
	//Printing the current exact age
	printf("\nYour currect age is: %d years %d months %d days\n",totalyears,totalmonth,totaldays);
	getch();
	return 0;
	}
