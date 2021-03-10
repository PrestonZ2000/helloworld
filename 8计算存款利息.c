#include<stdio.h>
#include<math.h>
int  main() {
	float m, y, r, i;
	scanf("%f%f%f",&m,&y,&r);
	i = m * pow((1 + r),y) - m;
	printf("interest = %.2f", i);
	return 0;
}
