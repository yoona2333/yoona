/*#include<stdio.h>
int main()
{
	int i = 10;
	printf("hello world\n");
}*/
/*#include<stdio.h>//导入一个文件 stdio.h  std是一个标准库  i  inpot   o  output    .h头文件.
int main(void)  //（）里面表示函数的参数，函数的参数表示可以有多个，中间可以用逗号分隔
 //int 数据类型 整型 如果出现在函数中表示函数的返回值  main程序的主函数，程序有且只有一个主函数
{
	printf("hello          world\n");//printf是stdio.h中系统提供的函数，表示在标准输出设备上打印字符串
	return 0;

}*/
/*#include<stdlib.h>
#include<stdio.h>
int main()
{
	int a;
	//system可以打开一个外部应用程序，如果带路径需要使用\\或/
	//system("calc");//计算器calc
	a=system("D:\\QQ\\Bin\\QQ.exe");
	printf("%d\n", a);
	return 0;
}*/
/*C语言分步编译
* 预处理：宏定义展开 头文件展开 条件编译 去掉注释
* 编译：检查语法 将C语言转化成汇编语言
* 汇编：将汇编语言转化为机器语言（二进制码）
* 链接：将C语言依赖库链接到程序中
**/
//#include<stdio.h>
//int main()
//{
//	char ch = 'a';
//	int age = 10;
//	short num = 10;
//	float weight = 55.5;
//	double yy = 2.3;
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	return 0;
//}
//#include<stdio.h>
//#define	max 10
//int main()
//{
//	int a = max;
//	int arr[max] = { 0 };
//	printf("a=%d\n", a);
//	//int age = 22;
//	//age = age++;
//	//int a = 0;
//	//int b = 0;
//	//int sum = 0;
//	//scanf_s("%d %d", &a, &b);
//	//sum = a + b;
//	//printf("%d\n", sum);
//	//printf("%d\n", sizeof(char));//4
//	return 0;
//}
//当局部变量和全局变量名字冲突时，局部优先
//#include<stdio.h>
//enum sex//枚举类型的变量的未来的可能取值
//{
//	male=3,//赋初值
//	famale,
//	secret
//};
//int main()
//{
//	enum sex s = male;
//	printf("%d\n", male);//3
//	printf("%d\n", famale);//4
//	printf("%d\n", secret);//5
//	return 0;
//}
//字符串就是一串字符吗，用双引号引起来的,字符串在结尾的位置隐藏了一个\0的字符,仅仅作为结束标志
//#include<stdio.h>
//int main()
//{
//	char arr[] = "abc";
//	char arr1[] = { 'a','\0','c','\0','g'};
//	int len = strlen("abc");
//
//	//printf("%d\n", len);
//	printf("%d\n", strlen(arr));//strlen函数是找\0，找到就停止
//	printf("%d\n", strlen(arr1));
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	if (a ==1)
//	{
//		printf("succes\n");
//	}
//	else
//	{
//		printf("fail");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	while (a < 10) 
//	{
//		printf("%d\n",a);
//		a++;
//	}
//	if (a==2)
//	{
//		printf("success\n");
//	}
//	return 0;
//}
//#include<stdio.h>
// int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf_s("%d %d", &a, &b);
//	sum=add(a, b);
//	printf("sum=%d", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//数组是用下标表示的，第一个元素的下标为0
//	char ch[] = { 'a','b','c' };//不完全初始化，剩余的默认为零
//	for (int i=0;i<10;i++)
//	{
//		printf("%d ", arr[i]);	
//	}
//	/*while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}*/
//	return 0;
//}
#include<stdio.h>
int main()
{ 
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr[0]));
	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
	return 0;
}