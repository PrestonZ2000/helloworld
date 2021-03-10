#include<stdio.h>
int  main() {
	int a, b, c, d;
	float e, f, g;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	e = a + b + c + d;
	f = e / 4;
	g = f;
	printf("Sum = %.f; Average = %.1f", e, g);
	return  0;
}
