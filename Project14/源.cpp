#include<stdio.h>
int main()
{
	int i, j, n;
	unsigned long s = 0, t;
	printf("please input a n:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		t = 1;
		for (j = 1; j <= i; j++)
			t = t*j;
		printf("i!= %lu.\n", t);
		s = s + t;
	}
	printf("total equals to %lu", s);
	return 0;

}