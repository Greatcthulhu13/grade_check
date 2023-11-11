#include <stdio.h>
/* D.1 Level 1 number 3 (gradecheck.c) - using if else statements */
int main()
{
	int grade;
	printf("Enter your grade: ");
	scanf("%d", &grade);
	if (grade >=100)
		printf("FULL MARKS! \n");
	else if (grade >=70)
		printf("You got a FIRST! \n");
	else if (grade >=60)
		printf("You got a 2:1 \n");
	else if (grade >=50)
		printf("You got a 2:2 \n");
	else if (grade >=40)
		printf("You turned up! \n");
	else if (grade < 0)
		printf("How? \n");
	else printf("You failed \n");
	return 0;
}
