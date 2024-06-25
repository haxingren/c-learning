#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int MAX(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	//int a = 0;
	//int b = 0;
	//scanf("%d %d", &a, &b);
	//if (a > b)
	//	printf("%d\n", a);
	//else
	//	printf("%d\n", b);

	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int R = MAX(a, b);
	printf("%d\n", R);
	return 0;
}