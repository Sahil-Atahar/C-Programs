#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void Temperature();
void Time();
void Length();

void celsiusToOther();
void fahrenheitToOther();
void kelvinToOther();

void dayToOther();
void hourToOther();
void minuteToOther();
void secondToOther();

void meterToOther();
void centimeterToOther();
void footToOther();
void inchToOther();

int main()
{
	int userInput;
	clrscr();
	printf("Welcome to Main Menu:\n\n1- Temperature.\n2- Time.\n3- Length.\n4- Exit.\n\nEnter your choice: ");
	inputAgain:
	scanf("%d",&userInput);
	
	switch(userInput)
	{
		case 1:
			Temperature();
			break;
		case 2:
			Time();
			break;
		case 3:
			Length();
			break;
		case 4:
			exit(0);
		default:
			printf("Wrong input,Please choose within the given option: ");
			goto inputAgain;
	}
	
	getch();
	return 0;
}

void Temperature() {
	int userInput;
	clrscr();
	printf("You have selected temperature conversation: \n\n1- Celsius.\n2- Fahrenheit.\n3- Kelvin.\n\nSelect your input unit: ");
	
	inputAgain:
	scanf("%d",&userInput);
	
	switch(userInput)
	{
		case 1:
			celsiusToOther();
			break;
		case 2:
			fahrenheitToOther();
			break;
		case 3:
			kelvinToOther();
			break;
		default:
			printf("Wrong input,Please choose within the given option: ");
			goto inputAgain;
	}
}

void celsiusToOther() {
	
	clrscr();
	float celsius,fahrenheit,kelvin;
	printf("Enter Temperature in Celsius: ");
	scanf("%f",&celsius);
	
	fahrenheit = celsius*9/5 + 32;
	kelvin = celsius + 273.15;
	
	printf("\nTempreture in Fahrenheit is: %f F\n",fahrenheit);
	printf("Tempreture in kelvin is: %f K\n",kelvin);
	printf("Press any key to continue...");
	getch();
	main();
}

void fahrenheitToOther() {

	clrscr();
	float celsius,fahrenheit,kelvin;
	printf("Enter Temperature in fahrenheit: ");
	scanf("%f",&fahrenheit);
	
	celsius = ((fahrenheit-32)*5.0)/9.0;
	kelvin = celsius + 273.15;
	
	printf("\nTempreture in Celsius is: %f C\n",celsius);
	printf("Tempreture in kelvin is: %f K\n",kelvin);
	printf("Press any key to continue...");
	getch();
	main();
}
void kelvinToOther() {

	clrscr();
	float celsius,fahrenheit,kelvin;
	printf("Enter Temperature in kelvin: ");
	scanf("%f",&kelvin);
	
	celsius = kelvin - 273.15;
	fahrenheit = celsius*9/5 + 32;
	
	printf("\nTempreture in Celsius is: %f C\n",celsius);
	printf("Tempreture in fahrenheit is: %f F\n",fahrenheit);
	printf("Press any key to continue...");
	getch();
	main();
}

void Time() {
	
	clrscr();
	int userInput;
	printf("You have selected Time conversation: \n\n1- Day.\n2- Hour.\n3- Minute.\n4- Second.\n\nSelect your input unit: ");
	inputAgain:
	scanf("%d",&userInput);
	
	switch(userInput)
	{
		case 1:
			dayToOther();
			break;
		case 2:
			hourToOther();
			break;
		case 3:
			minuteToOther();
			break;
		case 4:
			secondToOther();
			break;
		default:
			printf("Wrong input,Please choose within the given option: ");
			goto inputAgain;
	}

}

void dayToOther() {
	
	clrscr();
	float day,hour,minute,second;
	printf("Enter Time in Days: ");
	scanf("%f",&day);
	
	hour = day*24.0;
	minute = hour*60.0;
	second = minute*60.0;
	
	printf("\nTime in Hours : %f\n",hour);
	printf("Time in Minutes : %f\n",minute);
	printf("Time in Seconds : %f\n",second);
	printf("Press any key to continue...");
	getch();
	main();
	
}

void hourToOther() {
	
	clrscr();
	float day,hour,minute,second;
	printf("Enter Time in Hours: ");
	scanf("%f",&hour);
	
	day = hour/24.0;
	minute = hour*60.0;
	second = minute*60.0;
	
	printf("\nTime in Days : %f\n",day);
	printf("Time in Minutes : %f\n",minute);
	printf("Time in Seconds : %f\n",second);
	printf("Press any key to continue...");
	getch();
	main();
}

void minuteToOther() {
	
	clrscr();
	float day,hour,minute,second;
	printf("Enter Time in Minutes: ");
	scanf("%f",&minute);
	
	day = (minute/60.0)/24.0;
	hour = day*24.0;
	second = minute*60.0;
	
	printf("\nTime in Days : %f\n",day);
	printf("Time in Hours : %f\n",hour);
	printf("Time in Seconds : %f\n",second);
	printf("Press any key to continue...");
	getch();
	main();
}

void secondToOther() {
	
	clrscr();
	float day,hour,minute,second;
	printf("Enter Time in Seconds: ");
	scanf("%f",&second);
	
	minute = second/60.0;
	hour = minute/60;
	day = hour/24.0;
	
	printf("\nTime in Days : %f\n",day);
	printf("Time in Hours : %f\n",hour);
	printf("Time in Minutes : %f\n",minute);
	printf("Press any key to continue...");
	getch();
	main();
}

void Length() {

	clrscr();
	int userInput;
	printf("You have selected Length conversation: \n\n1- Meter.\n2- Centimeter.\n3- Foot.\n4- Inch.\n\nSelect your input unit: ");
	inputAgain:
	scanf("%d",&userInput);
	
	switch(userInput)
	{
		case 1:
			meterToOther();
			break;
		case 2:
			centimeterToOther();
			break;
		case 3:
			footToOther();
			break;
		case 4:
			inchToOther();
			break;
		default:
			printf("Wrong input,Please choose within the given option: ");
			goto inputAgain;
	}
}


void meterToOther() {
	
	clrscr();
	float meter,cm,foot,inch;
	printf("Enter Length in meters: ");
	scanf("%f",&meter);
	
	cm = meter*100.0;
	inch = meter*39.37;
	foot = meter*3.28084;
	
	printf("Length in Centimeters: %f\n",cm);
	printf("Length in inches: %f\n",inch);
	printf("Length in feet: %f\n",foot);
	printf("Press any key to continue...");
	getch();
	main();
}

void centimeterToOther() {
	
	clrscr();
	float meter,cm,foot,inch;
	printf("Enter Length in Centimeters: ");
	scanf("%f",&cm);
	
	meter = cm/100.0;
	inch = meter*39.37;
	foot = meter*3.28084;
	
	printf("Length in Meters: %f\n",meter);
	printf("Length in inches: %f\n",inch);
	printf("Length in feet: %f\n",foot);
	printf("Press any key to continue...");
	getch();
	main();
}

void footToOther() {
	
	clrscr();
	float meter,cm,foot,inch;
	printf("Enter Length in feet: ");
	scanf("%f",&foot);
	
	meter = foot/3.28084;
	cm = meter*100.0;
	inch = meter*39.37;
	
	printf("Length in Meters: %f\n",meter);
	printf("Length in inches: %f\n",inch);
	printf("Length in Centimeter: %f\n",cm);
	printf("Press any key to continue...");
	getch();
	main();
}

void inchToOther() {
	
	clrscr();
	float meter,cm,foot,inch;
	printf("Enter Length in inches: ");
	scanf("%f",&inch);
	
	meter = inch/39.37;
	foot = meter*3.28084;
	cm = meter*100.0;
	
	
	printf("Length in Meters: %f\n",meter);
	printf("Length in feet: %f\n",foot);
	printf("Length in Centimeter: %f\n",cm);
	printf("Press any key to continue...");
	getch();
	main();
}
