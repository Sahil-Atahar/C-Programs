#include <stdio.h>
#include <conio.h>
int main()
{
	int n1 = 5 , n2 = 3,  *pn1, *pn2,temp;
	printf("Before Swaping:\n");
	printf("n1 = %d     n2 = %d\n",n1,n2);
	pn1 = &n1;
	pn2 = &n2;
    
    temp = *pn1;
    *pn1 = *pn2;
    *pn2 = temp;
    printf("After Swaping:\n");
    printf("n1 = %d     n2 = %d\n",n1,n2);
    getch();
	return 0;
}
