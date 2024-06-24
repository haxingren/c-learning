#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//利用函数写一个程序计算两个整数的和
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}//这是为了方便理解
//简化版的：
//int Add(int x, int y)
//{
//	return (x + y);
//}
//int main()
//{
	//基础的方法
	//int n1 = 0;
	//int n2 = 0;
	//scanf("%d %d", &n1, &n2);
	//int sum = n1 + n2;
	//printf("%d\n", sum);

	//使用函数的方法
	//int n1 = 0;
	//int n2 = 0;
	//scanf("%d %d", &n1, &n2);
	//int sum = Add(n1, n2);
	//printf("%d\n", sum);
	////写了一个函数之后，之后相同情况就可以直接使用该函数，可以大幅减少多余重复的代码
//	int mark1 = 0;
//	int mark2 = 0;
//	scanf("%d %d", &mark1, &mark2);
//	int totalmark = Add(mark1, mark2);
//	printf("%d\n", totalmark);
//	return 0;
//}