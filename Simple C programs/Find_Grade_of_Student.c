#include <stdio.h>
#include <conio.h>
int main()
{	clrscr();
	int Marks[5],Total=0,i;
	float Per;
	for(i=0;i<5;i++){
		printf("Enter the Marks of Subject[%d] : ",i+1);
		scanf("%d",&Marks[i]);
		}
	for(i=0;i<5;i++){
		if(Marks[i]>100){
			printf("\nMarks[%d] Can't be greater than 100.\n",i+1);
			goto End;
					}
		}
	for(i=0;i<5;i++){
	Total+=Marks[i];
		}
	printf("\nTotal Marks is : %d/500 \n",Total);
	Per =(float) Total/5;
	printf("Percentage is : %.2f\n",Per);
	if(Per<=100 && Per>=80)
	printf("Your Grade is  : A");
	else if(Per<80 && Per>=70)
	printf("Your Grade is  : B");
	else if(Per<70 && Per>=60)
	printf("Your Grade is  : C");
	else if(Per<60 && Per>33)
	printf("Your Grade is  : D");
	else
	{
	printf("You are Failed ,Because your percentage(%.2f) is less than 34%",Per);
	}
	End:
	getch();
	return 0;
}
