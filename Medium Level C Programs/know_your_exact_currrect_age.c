﻿#include <stdio.h>
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
	int day,month,year,pday,pmonth,pyear,i;
	long totalnoofdays = 0;
	int totalnoofmonth =0,totalnoofyears=0;
	//Taking user DOB
	printf("Enter your DOB using space: ");
	scanf("%d%d%d",&day,&month,&year);
	
	//Taking current date
	printf("Enter current date using space: ");
	scanf("%d%d%d",&pday,&pmonth,&pyear);
	
    //calculating the year difference
	for( i = year+1; i < pyear; i++) {
	totalnoofyears++;
		}
	//calculating the months differences
	if(pyear != year) { /* present year and DOB year will be same then this code will be execute. otherwise else
		statement  will be execute*/
	for( i = month +1 ; i <= 12; i++) {
	totalnoofmonth++; 
	}
	for(i = 1; i < pmonth; i++) {
	totalnoofmonth++;
	}
	}
	else {
		for( i = month +1 ; i < pmonth; i++) {
	totalnoofmonth++; 
	}
		}
	//calculting remaning days
	totalnoofdays += (getdaysinmonth(month, year) - day)+ pday;
	
	/*Condition if days is greater than monthdays then increase month */
	if(totalnoofdays >= getdaysinmonth(month, year)) {
		totalnoofmonth++;
		totalnoofdays  =  totalnoofdays - getdaysinmonth(month, year);
		}
	else
	{
	}
	/*Condition if momth is greater then or equal to 12 then increase year*/
	 if(totalnoofmonth >= 12 ) {
		totalnoofyears++;
		totalnoofmonth = totalnoofmonth - 12;
		}
	//Printing the current exact age
	printf("\nYour currect age is: %d years %d months %d days\n",totalnoofyears,totalnoofmonth,totalnoofdays);
	getch();
	return 0;
	}
