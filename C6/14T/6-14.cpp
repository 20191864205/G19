#include<stdio.h>
#include<string.h>
int main() {
	char s1[99], s2[99];
	int ans, i, total = 0, total2 = 0, sum1 = 0, sum2 = 0;
	gets(s1);
	gets(s2);
	for (i = 0; s1[i] != '\0'; i++) {
		total = int(s1[i]);
		sum1 += total2;
	}
	ans = sum1 - sum2;
	printf("%d\n",ans);
	return 0;
}