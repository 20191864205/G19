
#include<stdio.h>
#include<math.h>
int main() {
	double a = -10, b = 10, c, x, x1, x2, x3;
	while (1) {
		c = (a + b) / 2;
		x1 = 2 * pow(a, 3) - 4 * pow(a, 2) + 3 * a - 6;
		x2 = 2 * pow(b, 3) - 4 * pow(b, 2) + 3 * b - 6;
		x3 = 2 * pow(c, 3) - 4 * pow(c, 2) + 3 * c - 6;
		if (x3 == 0)
			x = c;
		else if (x1 * x3 < 0)
			b = c;
		else if (x2 * x3 < 0)
			a = c;
		if (fabs(a - b) < 1e-8) {
			x = a;
			break;
		}
	}
	printf("%lf",fabs(x));
	return 0;
}
