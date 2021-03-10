#include<stdio.h>
int main()
{
	int i, j, k, l;
	for (i = 0; i < 4; i++) {
		j = i;
		l = i;

		for (k = 0; k <= -1 + i; k++) {
			printf(" ");
		}
		for (; j < 3; j++) {
			printf("* ");
		}

		printf("*\n");

	}
	return 0;
}