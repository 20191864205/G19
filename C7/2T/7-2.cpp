#include<stdio.h>
#include<math.h>
float j;
int main()
{
	int a, b, c;
	int case1(int a, int b);
	int case2(int a, int b);
	int case3(int a, int b);
	printf("please enter a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	j = sqrt(b * b - 4 * a * c);
	if ((b * b - 4 * a * c) == 0)
		printf("the result is %d", case1(a, b));
	else if ((b * b - 4 * a * c) > 0) {
		printf("the result is %d and %d", case2(a, b), case3(a, b));
	}
	else
		printf("no result");
}
int case1(int a,int b) {
	int c;
	c = -b / (2 * a);
	return c;
}
int case2(int a, int b) {
	float c;
	c = (-b + j) / (2 * a);
	return c;
}
int case3(int a, int b) {
	float c;
	c = (-b - j) / (2 * a);
	return c;
}
