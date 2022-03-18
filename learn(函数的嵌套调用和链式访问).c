#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//函数的嵌套调用和链式访问
//可以嵌套调用 ，不能嵌套定义

//int test2()
//{
//	printf("hehe\n");
//}
//
//int test1()
//{
//	test2();
//	return 0;
//}
//
//int main()
//{
//	tset1();
//	return 0;
//}


//链式访问
//一个函数的返回值做为另一个函数的参数

//int main()
//{
//	int len = strlen("abc");
//	printf("%d\n", len);
//	
//	//链式访问
//	printf("%d\n", strlen("abc"));
//	return 0;
//}

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "bit";
//
//	printf("%s\n", strcpy(arr1, arr2));
//
//	printf("%d", printf("%d", printf("%d", 43)));
//	//printf返回的是打印在屏幕上字符的个数
//	return 0;
//}


//函数的声明，函数的定义在主函数之后
//函数的声明一般放在头文件中

//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//函数的声明 - 告知(读取一遍函数定义)
//	int Add(int, int);
//	
//	int c = Add(a, b);
//
//	printf("%d\n", c);
//	
//	return 0;
//}

//函数的定义

//int Add(int x, int y)
//{
//	return x, y;
//}


//函数的集成

#include "add.h"
#include "sub.h"

int main()
{
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	printf("%d\n", c);

	int d = Sub(a, b);
	printf("%d\n", d);

	return 0;
}





