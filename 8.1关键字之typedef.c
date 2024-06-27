#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////关键字之typedef - 类型定义（类型重命名）只用于类型

typedef unsigned int uint;//unsigned int太长了于是可以利用typedef来简化他的称呼之后用uint就等于unsigned int了

typedef struct Node
{
	int data;
	struct Node* next;
}Node;//这个结构体被定义为Node了，所以之后使用只需输入Node即可
//这是个结构体以后再了解，现在只需知道这是个类型并且可以用typedef简化

int main()
{
	unsigned int num1 = 10;//无符号变量
	uint num2 = 20;
	struct Node n;
	Node n2;

	return 0;
}