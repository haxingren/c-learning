#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//#define 定义标识符常量
#define NUM 100
//#define 定义宏
//宏类似函数，但不同，宏是将宏体(x),(y)替换成(a),(b)
#define ADD(x,y) ((x)+(y))//ADD是宏名，(x,y)是宏的参数（是无类型的），
//                 这是宏体

int Add(int x, int y)
{
	return x + y;
}//这是个函数，他的作用的调用函数时，将a, b赋值给变量x, y然后return出的结果赋值给c
int main()
{
	printf("%d\n", NUM);
	int n = NUM;
	printf("%d\n", n);

	int a = 10;
	int b = 20;
	int c = Add(a, b);//所以c = 30然后直接输出
	printf("%d\n", c);

	int d = ADD(a, b);//所以结果是d = (a) + (b)然后输出
	printf("%d\n", d);
	return 0;
}