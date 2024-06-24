#define _CRT_SECURE_NO_WARNINGS

//第一个代码
//#include <stdio.h>
//
//int main()
//{
//	printf("hello world\n");//printf 输出//\n分行
//	return 0;
//}



////数据的类型
//#include <stdio.h>
//
//int main()//最小单位bit //8bit=1byte,1024byte=1kb,1024kb=1mb
//{
//	printf("%zu\n", sizeof(char));//字符型//大小1字节=1byte
//	printf("%d\n", sizeof(short));//短整型//2
//	printf("%zu\n", sizeof(int));//整型//4
//	printf("%zu\n", sizeof(long));//长整型//4
//	printf("%zu\n", sizeof(long long));//更长的整型//8
//	printf("%zu\n", sizeof(float));//单精度浮点数//4
//	printf("%zu\n", sizeof(double));//双精度浮点数//8
//
//	return 0;
//}



//使用数据的情况
//#include <stdio.h>
//
//int main()
//{
//	char weight = w;
//	int age = 19;
//	int weight = 1000;  //创建变量
//	double price = 10.5;//为变量向内存申请空间//不同的数据类型申请不同的空间
//	return 0;//根据需求用不同的数据类型
//}




//变量分为局部变量和全局变量
#include <stdio.h>

//int a = 20;
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);//当全局变量和局部变量名字相同时，局部变量优先
//	printf("a=%d\n",a);
//	return 0;  //在{}里面的变量是局部变量 a = 10
//		       // 在{}外面的是全局变量 b = 20
//}

////变量的使用
////计算两个整数的和的代码
//int main()
//{
//	int num1 = 0;//给变量一个值叫初始化
//	int num2 = 0;
////	int num3;//num3未初始化
//
//	//输入
//	scanf("%d %d", &num1, &num2);
//
//	//求和
//	int sum = num1 + num2;
//
//	//输出
//	printf("%d\n", sum);
//	return 0;
//}


////声明来自外部的变量
//extern int a;//引用来自其他窗口/外部的变量
//
//int main()
//{
//	printf("a=%d\n", a);
//
//	return 0;
//}

