#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

////static修饰语法
//1.修饰局部变量
//2.修饰全局变量
//3。修饰函数

////1.修饰局部变量使其变成静态局部变量
////void test()//这是个函数
////{
////	int a = 0;//进入函数就会创建局部变量a
////	a++;
////	printf("%d ", a);//会打印出1 1 1 1 1 1 1 1 1 1 
////}//出去函数范围a就会销毁
//////所以循环时每次都会重新创建，加一，再销毁所以输出的都是1
//
//void test()
//{
//
//	//C语言会将内存分为几个区域：
//	//1.栈区 - 局部变量存储在这里，这里的特性是进入作用域创建变量，退出作用域销毁变量
//	//2.堆区
//	//3.静态区 - 存放静态变量，即被static修饰的变量，在这里的变量其生命周期与程序相同
////所以 static的作用是改变局部变量的存储位置
//	static int a = 0;//这里的a本来是存放在栈区，经static修饰后存放到静态区，所以退出函数后a不会被销毁，下次循环时会再被调用
//	a++;
//	printf("%d ", a);//会打印出1 2 3 4 5 6 7 8 9 10
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


////2.static修饰全局变量
////全局变量具有外部链接属性，可以通过引用extern来使用来自其他源文件的全局变量
//extern int gal;
////当全局变量被static修饰，变成静态全局变量了，其外部链接属性就被改变为内部链接属性，只能在其所在源文件使用，无法被其他源文件使用
//extern int gal2;
//int main()
//{
//	printf("%d\n", gal);//可以打印
//	//printf("%d\n", gal2);//err
//	return 0;
//}


//3.static修饰函数
//函数具有外部链接属性，可以被其他源文件引用
extern int Add(int x, int y);
//如果函数被static修饰，就变成了静态函数，其外部链接属性变为内部链接属性，其他源文件无法使用
//extern int ADD(int x, int y);//err
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("%d\n", sum);
	//int SUM = ADD(a, b);
	//printf("%d\n", SUM);
	return 0;
}