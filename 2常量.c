#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

////常量的种类
//int main()
//{
//	//1.字面常量
//	100;//数字常量
//	3.142;
//	'w';//字符用''
//	"cat";//字符串用""
//	//2.const修饰的常变量
//	//int a = 10;//这是变量
//	//a = 20;//可以改变常量
//	const int a = 20;//这样就无法被改变，但本质是还是个变量
//	printf("%d", a);
//	return 0;
//}
//	//3.define 定义的标识符常量
//#define MAX 100
//#define CAT "dssfsd"
//int main()
//{
//	printf("%d\n", MAX);
//	printf("%s\n", CAT);
//	return 0;
//}
//   //4.枚举常量
//关键字 enum
//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//
//int main()
//{
//	enum Color c = RED;//Color是变量，RED,GREEN,BLUE是这个变量的可能取值，是不变的，所以叫枚举常量
//
//	return 0;
//}
