#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


////对于复杂的对象，如：人物（包含名字，年龄，性别，电话等）或书籍（包含书名，作者，出版社，出版日期等）
//这些对象无法用单一的类型如int来描述，这时C语言允许自定义类型，即使用结构体struct将涉及的类型包含起来
//例子：学生
struct Stu
{
	//成员
	char name[20];
	int age;
	char sex[10];
	char tele[12];
};

void print(struct Stu* hh)//下面对print的使用将&s（s的地址）传到了hh, struct Stu*是类型，hh是变量
{
	printf("%s %d %s %s\n", (*hh).name, (*hh).age, (*hh).sex, (*hh).tele);//(*hh)是解引用s的地址，所以等于是s了
	//这个写法太长了，来看看简短的写法
	printf("%s %d %s %s\n", hh->name, hh->age, hh->sex, hh->tele);
	//->操作符，结构体指针变量->成员名
}
int main()
{
	struct Stu s = { "John", 21, "boy", "0123456789" };//这里的内容跟创建结构体时的成员顺序必须相同
	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);//这里打印顺序不需要跟结构体里的成员顺序一样，但是，打印方式必须和成员的类型对应
	printf("%s %s %d %s\n", s.name, s.sex, s.age, s.tele);
	//printf("%d %s %s %s\n", s.name, s.sex, s.age, s.tele);err,打印方式与成员类型不对应
	//.操作符
	//结构体对象.成员名

	//地址与结构体
	print(&s);//print是个函数
	return 0;
}