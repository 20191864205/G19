#include <iostream>


int main()

{
	int x, grade;
	scanf("%d", &x);
	grade = x / 10;
	if (grade >= 9&&grade<=10)
		printf("A\n");
	else if (grade == 8)
		printf("B\n");
	else if (grade == 7)
		printf("C\n");
	else if (grade == 6)
		printf("D\n");
	else if (grade>=0&&grade<=6)
		printf("E\n");
	return 0;


}