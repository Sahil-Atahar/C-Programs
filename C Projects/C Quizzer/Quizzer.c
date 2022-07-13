/* I write this with full attention.Each steps have a purpose.
   How to use this program:
   when you run this program it will take questions from Questions.txt file. if file don't exists or can't find file it will show "File Not Found!" error.To fix it download Quesyions.txt file and update the file path in filePath variable and then it will not show error.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main()
{
	char filePath[] = "Questions.txt";
	int totalNoOfQuestions = 10;
	
	char question[150],option1[50],option2[50],option3[50],option4[50],correctAnswer,userAnswer,line[256];
	int lineNo = 1,questionNo = 1,score = 0;
	FILE *fp;
	fp = fopen(filePath,"r");
	if(fp == NULL) {
	printf("File not found!");
	exit(0);
		}
	for(int i = 1; i <= totalNoOfQuestions; i++ ) {
	while (fgets(line,sizeof(line),fp)) { 
        if(lineNo == questionNo) 
        {
     if(lineNo == 1)
     strcpy(question,line);
     else
     fgets(question,150,fp);
        	
	fgets(option1,50,fp);
	fgets(option2,50,fp);
	fgets(option3,50,fp);
	fgets(option4,50,fp);
	correctAnswer = fgetc(fp); 
     lineNo+=6;
     break; 
          }
     else 
     lineNo++;
    }
     clrscr();	
	puts(question);
	fputs(option1,stdout);
	fputs(option2,stdout);
	fputs(option3,stdout);
	puts(option4);
		
	printf("Your Answer: ");
		
	takeInputAgain:
	scanf("%c",&userAnswer);
	if(userAnswer == 'a' || userAnswer == 'b' || userAnswer == 'c' || userAnswer == 'd') {
		switch(userAnswer == correctAnswer)
	 {
	 case 1:
	 	printf("Your answer is Correct.");
	 	score++;
	 	sleep(1);
	 	break;
	 case 0:
	 	printf("Your answer is wrong.Correct answer is option %c.",correctAnswer);
	 	sleep(1);
	 	}
	 }
	else {
		printf("Wrong input,please choose correct option: ");
		goto takeInputAgain;
		}
	questionNo+=6;
	}
	clrscr();
	printf("Your score is: %d/%d.",score,totalNoOfQuestions);
	fclose(fp);
	getch();
	return 0;
}
