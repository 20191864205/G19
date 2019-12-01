#include<stdio.h>
#include<math.h>
int main() {
	float solut(float a, float b,float c,float d);
	float a, b, c, d;
	scanf("%f%f%f%f", &a, &b, &c, &d);
	printf("x在1附近的一个实根为%f", solut(a,b,c,d));
	return 0;
}
float solut(float a, float b, float c, float d) {
	float x1 = 1, x0, f1, f;
	do {
		x0 = x1;
		f1 = (a * 3) * x0 * x0 + (b * 2) * x0 + c;
		f = a * x0 * x0 * x0 + b * x0 * x0 + c * x0 + d;
		x1 = x0 - f / f1;
	} while (fabs(x1 - x0) >= 1e-3);
	return x1;
}