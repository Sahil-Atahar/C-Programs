#include <stdio.h>
#include <conio.h>
#include <string.h>
void PrintCalender(int d,int m);
void PriMonName(int d,int year);
int Day2Value(char day[3]);
int FirstLine(int d);
void LastLine(int i,int a);
int IsLeapYear(int year);

int main()
{	
	char month[3],day[3];
	int m,d,year,i,j,div,date[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int tdays;
	printf("Enter the Year[YYYY]: ");
	scanf("%d",&year);
	int oldyear=2000;
	d=Day2Value("Saturday");
	tdays=d;
	for(j=oldyear;j<year;j++){
		for(i=1;i<=12;i++){
		date[2]=IsLeapYear(j);
		tdays+=date[i];
		}
	}
	d=tdays%7;
	date[2]=IsLeapYear(year);
	for(i=0;i<12;i++){
	d=(d+date[i]);
	div=d%7;
	PriMonName(i,year);
	PrintCalender(div,date[i+1]);
	}
	getch();
	return 0;
}
int Day2Value(char day[3]){
	if(strcmp(day,"Sunday")==0){
		return 0;		}
	else if(strcmp(day,"Monday")==0){
		return 1;		}
	else if(strcmp(day,"Tuesday")==0){
		return 2;		}
	else if(strcmp(day,"Wednesday")==0){
		return 3;		}
	else if(strcmp(day,"Thursday")==0){
		return 4;		}
	else if(strcmp(day,"Friday")==0){
		return 5;		}
	else if(strcmp(day,"Saturday")==0){
		return 6;		}	
}
void PrintCalender(int d,int m){
	int a;
	printf(" Mon Tue Wed Thu Fri Sat Sun\n");
	a=FirstLine(d);
	printf(" %3d %3d %3d %3d %3d %3d %3d\n",a++,a++,a++,a++,a++,a++,a++);
	printf(" %3d %3d %3d %3d %3d %3d %3d\n",a++,a++,a++,a++,a++,a++,a++);
	printf(" %3d %3d %3d %3d %3d %3d %3d\n",a++,a++,a++,a++,a++,a++,a++);
	LastLine(m-a+1,a);
}	
int FirstLine(int d){
	int a=1;
	if(d==1){
	printf(" %3d %3d %3d %3d %3d %3d %3d\n",a++,a++,a++,a++,a++,a++,a++);
	}
	else if(d==2){
		printf("     %3d %3d %3d %3d %3d %3d\n",a++,a++,a++,a++,a++,a++);
	}
	else if(d==3){
		printf("         %3d %3d %3d %3d %3d\n",a++,a++,a++,a++,a++);
	}
	else if(d==4){
		printf("             %3d %3d %3d %3d\n",a++,a++,a++,a++);
	}
	else if(d==5){
		printf("                 %3d %3d %3d\n",a++,a++,a++);
	}
	else if(d==6){
		printf("                     %3d %3d\n",a++,a++);
	}
	else if(d==0){
		printf("                         %3d\n",a++);
	}
	return a;
}
void LastLine(int i,int a){
	switch(i)
	{
		case 1:
		printf("%3d\n",a++);
		break;
		case 2:
		printf("%3d %3d\n",a++,a++);
		break;
		case 3:
		printf(" %3d %3d %3d\n",a++,a++,a++);
		break;
		case 4:
		printf(" %3d %3d %3d %3d\n",a++,a++,a++,a++);
		break;
		case 5:
		printf(" %3d %3d %3d %3d %3d\n",a++,a++,a++,a++,a++);
		break;
		case 6:
		printf(" %3d %3d %3d %3d %3d %3d\n",a++,a++,a++,a++,a++,a++);
		break;
		case 7:
		printf(" %3d %3d %3d %3d %3d %3d %3d\n",a++,a++,a++,a++,a++,a++,a++);
		break;
		case 8:
		printf(" %3d %3d %3d %3d %3d %3d %3d\n",a++,a++,a++,a++,a++,a++,a++);
		printf(" %3d\n",a++);
		break;
		case 9:
		printf(" %3d %3d %3d %3d %3d %3d %3d\n",a++,a++,a++,a++,a++,a++,a++);
		printf(" %3d %3d\n",a++,a++);
		break;
	}	
		
}
void PriMonName(int d,int year){
	switch(d){
		case 0: 
			printf("\n\t\tJANUARY %d\n\n",year);
			break;
		case 1:
			printf("\n\t\tFEBRUARY %d\n\n",year);
			break;
		case 2:
			printf("\n\t\tMARCH %d\n\n",year);
			break;
		case 3:
			printf("\n\t\tAPRIL %d\n\n",year);
			break;
		case 4:
			printf("\n\t\tMAY %d\n\n",year);
			break;
		case 5:
			printf("\n\t\tJUNE %d\n\n",year);
			break;
		case 6:
			printf("\n\t\tJULY %d\n\n",year);
			break;
		case 7:
			printf("\n\t\tAUGUST %d\n\n",year);
			break;
		case 8:
			printf("\n\t\tSEPTEMBER %d\n\n",year);
			break;
		case 9:
			printf("\n\t\tOCTOBER %d\n\n",year);
			break;
		case 10:
			printf("\n\t\tNOVEMBER %d\n\n",year);
			break;
		case 11:
			printf("\n\t\tDECEMBER %d\n\n",year);
			break;
		default:
			printf("\n\t\tNO NONAME\n\n"); 
	}
}	
int IsLeapYear(int year){
   if (year % 400 == 0) {
      return 29;
   }
   else if (year % 100 == 0) {
      return 28;
   }
   else if (year % 4 == 0) {
      return 29;
   }
   else {
      return 28;
   }
}
