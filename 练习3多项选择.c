#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//三种情况下做出选择，1.x>0,y=1, 2.x=0,y=0, 3.x<0,y=-1
/*
int RE(int a, int b)
{
	if (a > 0)
		return (b = 1);
	else if (a == 0)
		return (b = 0);
	else
		return (b = -1);
}
int main()
{
	int x = 0;
	int y = 0;
	scanf("%d", &x);
	int r = RE(x, y);
	printf("%d", r);
	return 0;
}
*/

int main()
{
	int x = 0;
	int y = 0;
	scanf("%d", &x);
	if (x > 1)
		y = 1;
	else if (x == 0)
		y = 0;
	else
		y = -1;
	printf("%d\n", y);
	return 0;
}