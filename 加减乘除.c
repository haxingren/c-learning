#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int r = (10 + 20) / a + (30 - 10) * b;
//	printf("%d\n", r);
//	return 0;
//}

int CAL(int x, int y)
{
	return (2 * x + 4 / y);
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int r = CAL(a, b);
	printf("%d\n", r);
	return 0;
}