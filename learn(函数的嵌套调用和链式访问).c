#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//������Ƕ�׵��ú���ʽ����
//����Ƕ�׵��� ������Ƕ�׶���

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


//��ʽ����
//һ�������ķ���ֵ��Ϊ��һ�������Ĳ���

//int main()
//{
//	int len = strlen("abc");
//	printf("%d\n", len);
//	
//	//��ʽ����
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
//	//printf���ص��Ǵ�ӡ����Ļ���ַ��ĸ���
//	return 0;
//}


//�����������������Ķ�����������֮��
//����������һ�����ͷ�ļ���

//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//���������� - ��֪(��ȡһ�麯������)
//	int Add(int, int);
//	
//	int c = Add(a, b);
//
//	printf("%d\n", c);
//	
//	return 0;
//}

//�����Ķ���

//int Add(int x, int y)
//{
//	return x, y;
//}


//�����ļ���

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





