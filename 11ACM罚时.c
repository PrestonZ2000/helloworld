#include<stdio.h>
int main()
{
	int a, b, c, d, cuo,ans,time=60,aa,bb;
	scanf("%d:%d %d:%d %d", &a, &b, &c, &d, &cuo);
	aa = a * 60 + b;
	bb = c * 60 + d;
	ans = bb - aa + cuo * 20;
		printf("%d", ans);
	return 0;
}