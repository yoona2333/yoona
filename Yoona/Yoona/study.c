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
//#include<stdio.h>
//int main()
//{ 
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[0]));
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);//~按二进制位取反  计算机在内存中存储的是补码
//	//一个二进制的表示有三种  原码 补码 反码  
//	//原码变反码  符号位不变，剩余位取反
//	//反码变补码  反码加1
//	//正整数原码反码补码相同
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = ++a;//前置++，先++，后使用
//	int c = a++;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	double a = 3.14;
//	printf("%f\n",a);
//	return 0;
//}
/*#include<stdio.h>
int main()
{
	int a = 1;
	int b = 3;
	int c = 5;
	//int max = 0;
	//max = a < b?a:b;
	int d = (a = b + 5, b = a + 6, c = 2 + b);//逗号表达式是从左向右依次计算的，整个表达式的结果是最后一个表达式的结果
	printf("%d\n", d);//三目操作符
	return 0;
}*/
/*typedef unsigned int u_int;//类型重定义
#include<stdio.h>
int main()
{
	unsigned int num = 10;
	u_int num2 = 100;
	//int arr[] = { 0,1,2,3,4,5,6 };
	//printf("%d\n", arr[2]);//下标引用操作符

	return 0;
}*/
/*void test()
{
	static int a = 0;//出范围不销毁，保留。，修饰局部量，改变了生命周期，本质上是改变了变量的存储类型.
	a++;
	printf("%d\n", a);
}
#include<stdio.h>//static修饰全局变量，局部变量，函数
int main()
{
	int i = 0;
	while(i < 10)
	{
		test();
		i++;
	}
	return 0;
}*/
//extern int a;//只用声明名字类型，全局变量在整个工程中都可以使用。
//static修饰全局变量，使得这个全局变量只能在自己所在的源文件.c内部可以使用
//全局变量，在其他源文件内部可以被使用，是因为全局变量具有外部链接属性，
//但是被static修饰之后就变成了内部链接属性，其他源文件就不能链接到这个静态的全局变量了
/*int main()
{
	int x = 20;
	int y = 30;
	int z = add(x, y);
	printf("%d\n",z);
	return 0;
}*/
//define是一个预处理指令
//#define max 100
//#define add(x,y) ((x)+(y))//这样才是4*8
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", 4 * add(2, 6));//4*2+6，而不是4*8
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	//int a = 10;
//	//printf("%p\n", &a);
//	//int*pa = &a;//*说明pa是指针，int说明pa执行的对象是int类型
//	//&a 取a的地址
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;//解引用操作，*pa就是通过pa里边的地址找到a
//	printf("%d\n", a);
//
//	return 0;
//}
/*struct stu
{
	char name[20];
	int age;
	double score;

};
struct book
{
	char name[20];
	float price;
	char  id[20];

};
#include<stdio.h>
int main()
{
	struct stu s = { "zhangsan",20,85.5 };//结构体的创建和初始化
	struct book b = { "sanguo",20.6,"ooo"};//结构体的创建和初始化

	printf("1%s %d %lf\n", s.name, s.age, s.score);//结构体变量，成员变量
	printf("3%s %f %s\n", b.name, b.price, b.id);
	struct stu*ps=&s;
	printf("2%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
	printf("3%s %d %lf\n", ps->name, ps->age, ps->score);

	return 0;
}*/
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	printf("%s\n", a % 5==0? "yes" : "no");
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int age = 25;
//	if (age < 18)
//	{
//		printf("chengnian\n");
//	}
//	else if(18<age&&age<26)
//	{
//		printf("weichengnian\n");
//	}
//	else {
//		printf("......");
//	}
//	return 0;
//}
//#include<stdio.h>//0表示假，非0表示真
//int main()
//{
//	int num = 3;
//	if (num % 2 == 1)
//	{
//		printf("shi\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
/*while (a<=100)
	{
		if (a % 2 == 1) {
			printf("  %d", a);
		}
		a++;
	}*/
/*for (a = 0; a < 101; a++)
	{
		if (a % 2 == 1)
		{
			printf("%d\n", a);		
		}
	};
	return 0;
}*/
//#include<stdio.h>
//int main()
//{
//	int  day = 0;
//	scanf_s("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("1\n");
//		break;
//	case 2:
//		printf("2\n");
//		break;
//	case 3:
//		printf("3\n");
//		break;
//	}
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("1\n");
//	}
//	/*while (i < 10)
//	{
//		printf("1\n");
//		i++;
//	}*/
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i=0;
//	while (i<10)
//	{
//		if (i == 5)
//			//break;//while循环中break用于永久的终止循环
//			continue;//while循环中continue的作用是跳过本次循环continue后边的代码直接去判断部分，看是否进行下一次循环
//		printf("%d\n",i);
//		i++;
//
//	}
//	return 0;
//}
/*#include<stdio.h>
//int main()
//{
//	/*int ch = getchar();
//	putchar(ch);
//	//eof(-1)文件结束标志
//	/*int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//
//	return 0;*/
//}
//#include<stdio.h>
//int main()
//{
//	char password[20] = { 0 };
//	printf("qingshurumima:");
//	scanf_s("%s", password);
//	printf("qingquere(Y/N):>");
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch =='Y')
//	{
//		printf("zhengque");
//	}
//	else
//	{
//		printf("cuowu");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码：>");
//		scanf_s("%s", password);//遇到空格就停
//		printf("请确认密码(Y/N):>");
//		//getchar();处理\n
//			//int tmp = 0;
//		/*	while ((tmp = getchar()) != '\n')//清理缓冲区 
//			{
//				;
//			};*/
//			int ch = getchar();
//			if (ch == 'Y')
//			{
//				printf("zhnegque");
//			}
//			else
//			{
//				printf("cuowu");
//			}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//
//	/*int arr[10] = { 1 ,2,3,4,5,6};
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}*/
//	//int i = 1;
//	//for (i = 1; i < 11; i+=3)
//	//{
//	//	printf("%d\n", i);
//	//	//i=i+1;循环体内不要改变循环变量
//	//}
//	/*while (i < 11)
//	{
//		printf("%d\n", i);
//		i+=2;
//	}*/
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	if (ch < '0' || ch>'9')
//	//	{
//	//		continue;//跳过本次循环后面的代码
//	//		
//	//	}
//	//	putchar(ch);
//	//};
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int k = 7;
//	int left = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	
//	while(left<=right)
//	{
//	int mid = (left + right) / 2;
//	if (arr[mid] < k)
//	{
//		left = mid + 1;
//	}
//	else if (arr[mid] > k)
//	{
//		right = mid - 1;
//	}
//	else
//	{
//		printf("zhaonudao：%d\n", arr[mid]);
//		break;
//	}
//
//}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 9;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (right + left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else 
//		{
//			printf("zhaodaole:%d\n", arr[mid]);
//			break;
//		}
//		
//		/*{
//			printf("zhaobudao");
//		}
//			break;*/
//		
//
//	}
// 	//return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//	for (i = 0; i < 3; i++)
//	{
//		printf("shurumima:");
//		scanf_s("%s", password);
//		//if(passwold=="123456");error
//		if (strcmp(password,"123456")== 0) //两个字符串比较，不能使用==，应使用strcmp
//		{
//			printf("success\n");
//			break;
//		}
//		else
//		{
//			printf("error\n");
//		}
//
//	}
//
//
//	/*char arr1[] = "welcome to bit";
//	char arr2[] = "##############";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//	}*/
//	//printf("%s\n", arr2);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, c = 0;
//	scanf_s("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int i = 0;
//		i = a;
//		a = b;
//		b = i;
//	}
//	if (a < c)
//	{
//		int i = a;
//		a = c;
//		c = i;
//	}
//	if (b < c)
//	{
//		int i = b;
//		b = c;
//		c = i;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
/*int get_max(int x, int y)
{
	/*int z = 0;
	if (x > y)
	{
		z = x;
	}
	else
	{
		x = y;
	}
	return x;*/
/*if (x > y)
		return x;
}
#include<stdio.h>
int main()
{
	int a =100;
	int b = 150;
	int max=get_max(a, b);
	printf("%d\n", max);
	/*char arr1[20] = { 0 };
	char arr2[] = { "hello" };
	strcpy(arr1, arr2);
	printf("%s\n", arr1);*/
/*return 0;
	}*/
/*void swap(int* pa, int* pb)//地址会交换
	{
		int z = 0;
		z = *pa;
		*pa = *pb;
		*pb = z;
	}
	#include<stdio.h>
	int main()
	{
		int a = 10;
		int b = 20;
		swap(&a,&b);
		printf("%d %d", a, b);


		return 0;
	}*/
/*#include<stdio.h>
	int is_prime(int n)
	{
		int j = 0;//2---n-1之间的数
		for (j = 2; j < n; j++)
		{
			if (n % j == 0)
			{
				return 0;
			}
		}
		return 1;
	}
	int main()
	{
		int i = 0;
		int count = 0;
		for (i = 100; i <= 200; i++)
		{
			if (is_prime(i) == 1)
			{

				printf("%d ", i);
				count++;
			}
		}
		printf("%d\n", count);
		return 0;
	}*/
/*#include<stdio.h>
	int nn(int a[], int k, int s)
	{
		int left = 0;
		int right = s - 1;
		while (left <= right)
		{
			int mid = (left + right) / 2;
			if (a[mid] > k)
			{
				right = mid - 1;
			}
			else if (a[mid] < k)
			{
				left = mid + 1;
			}
			else
			{
				return mid;
			}
		}
		return -1;
	}
	int main()
	{
		int arr[]={ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
		int key = 10;
		int sz = sizeof(arr) / sizeof(arr[0]);
		//找到返回下标，找不到返回-1
		int ret = nn(arr,key,sz);
		if (ret== -1)
		{
			printf("zhaobudao\n");
		}
		else
		{
			printf("%d\n", ret);
		}
		return 0;
	}*/
/*int add(int* p)
{
	(*p)++;
}
#include<stdio.h>
int main()
{
	int num = 0;
	add(&num);
	add(&num);
	printf("%d\n", num);
	return 0;
}*/
//#include<stdio.h>
//#include"add.h"
//int main()
//{
//	/*int len = strlen("abc");
//	printf("%d\n", len);
//	printf("%d\n", strlen("abc"));*/
//	//printf("%d", printf("%d", printf("%d", 43)));
//	int a = 10;
//	int b = 20;
//	int c = add(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}
/*#include<stdio.h>//递归，函数自己调用自己
void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	unsigned int num = 0;
	scanf_s("%u", &num);
	print(num);//递归一层一层的返回来
	/*printf("hehe\n");
	main();
	return 0;
}*/
/*int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//	/*int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	printf("%d\n", my_strlen(arr));*/
//#include<stdio.h>
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int ret = fac(n);
//	printf("%d\n", ret);
//	return 0;
//}
/*#include<stdio.h>
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
	/*if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}*/
/*#include<stdio.h>
int main()
{
	int i = 1;//打印行
	for (i = 1; i < 10; i++)
	{
		int j = 0;
		for (j = 1; j <=i; j++)
		{
			printf("%d*%d=%d ", i, j, i * j);
		}
		printf("\n");
	}
	/*
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int max = 0;
	for (i = 0; i < 11; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d\n", max);*/
/*int i = 0;
	double  sum = 0.0;
	for (i = 1; i < 101; i++)
	{
		if (i % 2 == 0)
			sum -= 1.0 / i;
		else
			sum += 1.0 / i;
	}
	printf("%lf\n", sum);*/
/*int i = 0;
	int count = 0;
	for(i=1;i < 101; i++)
	{
		if (i % 10 == 9)
		{
			count++;
		}
		if (i / 10 == 9)
		{
			count++;
		}
	}
	printf("%d\n", count);*/
/*int n = 0;
	scanf_s("%d", &n);
	int ret = fib(n);
	printf("%d\n", ret);*/
//return 0;
//}
//#include<stdio.h>
// printtable(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d  ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	printtable(n);
//	return 0;
//}
//#include<stdio.h>
//mystrlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//reverse(char* str)
//{
//	int left = 0;
//	int right = mystrlen(str) - 1;
//	while (left < right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//
//	char arr[] = "abcdef";
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//#include<stdio.h>
////dig(int n)
////{
////	if (n > 9)
////	{
////		return dig(n / 10) + n % 10;
////	}
////	else
////		return n;
////}
//pow(int n,int k)
//{
//	if (k== 0)
//		return 1.0;
//	else if(k>0)
//		return n * pow(n, k - 1);
//	else
//		return 1.0 * pow(n, k - 1);
//	
//}
//int main()
//{
//	/*int num = 1729;
//	int sum = dig(num);
//	printf("%d\n", sum);*/
//	int n = 0;
//	int k = 0;
//	scanf_s("%d %d", &n, &k);
//	double ret = pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}
/*#include<stdio.h>
int main()
{
	//int arr[3][4];//三行四列
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int* p = arr;
	//int i = 0;
	//for (i = 1; i <=10; i++)//数组在内存中是连续存放的
	//{
	//	printf("%d ", *p);
	//	p++;
	//}
	int arr[][4] = { {1,2 },{3,4},{5,6}};//行可以省略
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			//printf("%d", arr[i][j]);
			printf("%p\n", &arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/
//void mao(int arr[], int sz)//形参arr本质上是指针
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]);//计算数组的元素个数
//	int i = 0;
//	for (i = 0; i < sz-1; i++)//确定躺数
//	{
//		int j = 0;//一趟冒泡排序
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//
//			}
//		}
//		printf("%d ", arr[j]);
//
//	}
//
//}
//#include<stdio.h>
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组的元素个数
//
//	mao(arr,sz);//数组传参传的是数组首元素的地址
//	/*int arr[][4] = { {1,2 },{3,4},{5,6}};
//	int* p = &arr[0][0];
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}*/
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	//sizeof（数组名）数组名表示整个数组，计算的是整个数组的大小，单位是字节
//	//&数组名  数组名表示整个数组 取出的是整个数组的地址
//	int arr[10] = { 0 };
//	printf("%p\n", &arr);//取出的是数组的地址
//	/*printf("%d\n", sizeof(arr));
//	printf("%p\n", &arr[0]);
//	printf("%p\n", arr);
//	//数组名就是首元素的地址
//	printf("%p\n", &arr);*/
//	return 0;
//}
//#include<stdio.h>
//struct book
//{
//	char name[20];
//	char id[20];
//	int price;
//};
//int main()
//{
//	int num = 10;
//	struct book b = { "c语言","c123456",55};
//	struct book* pb = &b;
//	printf("书名:%s\n", pb->name);
//	printf("书号:%s\n", pb->id);
//	printf("价格:%d\n", pb->price);
//	printf("书名:%s\n", (*pb).name);
//	printf("书号:%s\n", (*pb).id);
//	printf("价格:%d\n", (*pb).price);
//	printf("书名:%s\n", b.name);
//	printf("书号:%s\n", b.id);
//	printf("价格:%d\n", b.price);
//	return 0;
//}
//#include<stdio.h>
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for(i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{	
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//
//	init(arr, sz);
//	print(arr, sz);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	//指针类型的意义：
//	//指针类型决定了指针解引用的权限有多大
//	//指针类型决定了指针走一步，能走多远（步长距离）
//	int arr[10] = { 0 };
//	int* p = arr;
//	char* pc = arr;
//	printf("%p\n", p);
//	printf("%p\n", p + 1);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	return 0;
//}
//野指针就是指针指向的位置是不可知的（随机的，不正确的，没有明确限制的）
//#include<stdio.h>
//int main()
//{
//	//这里的p就是一个野指针
//	//int* p;//p是一个局部的指针变量，局部变量不初始化的话，
//	//*p = 20;//非法访问内存
//	//当前不知道p应该初始化为什么地址的时候，直接初始化为null
//	//C语言本身不会检查数据的越界行为的
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)//越界访问
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}
//指针减去指针得到的是两个指针之间的元素的个数
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	**ppa = 10000;
//	printf("%d\n", **ppa);
//	return 0;
//}
//结构是一些值的集合，这些值称为成员变量，结构的每个成员可以是不同类型的变量
//#include<stdio.h>
//struct B 
//{
//	char c;
//	short s;
//	double d;
//};
//struct stu
//{
//	struct B sb;
//	char name[20];
//	int age;
//	char id[20];
//}s1, s2;//也是结构体变量 属于全局变量
//int main()
//{
//	struct stu s = { {'w',20,3.14},"张三",200,"12456645"};
//	/*printf("%c", s.sb.c);
//	printf("%s", s.id);
//	printf("%s", s.name);
//	printf("%lf", s.sb.d);*/
//	struct stu* ps = &s;
//	printf("%d", (*ps).age);
//	printf("%c", ps->sb.c);
//	printf("%s", ps->name);
//
//	return 0;
//}
//const修饰变量，这个变量就被称为常变量，不能被修改，但本质上还是变量
//#include <stdio.h>//断言
//#include <assert.h>
//void my_strlen(char* dest,const char* src)
//{
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxx";
//	char arr2[] = "hello";
//	my_strlen(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	const int num= 10;
//	const int* p = &num;//const如果放在*号的左边表示*p指向的内容是不能通过指针来改变的
//	//但是指针变量本身是可以修改的
//	//int* p = &num;
//	//int*const p=&num;
//	//const放在右边时，修饰的是指针变量p，表示指针变量不能被改变，但指针指针的内容可以被改变
//	int n = 20;
//	p = &n; 
//	printf("%d\n", num);
//	return 0;
//}
//#include<stdio.h>
//#include<assert.h>
//strleng(const char* str)
//{
//	assert(str != NULL);
//	//assert(str);
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcd";
//	int len = strleng(arr);
//	printf("%d\n", len);
//
//	return 0;
//}
//大端子节序：把数据的地位字节序的内容放在高地址处，高位字节序的内容就存放在低地址处11223344
//小端字节序：把数据的低位字节的内容放在低地址处，高位字节序的内容存放在高地址处44332211
//#include<stdio.h>
//int check()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		return 1;
//	}
//	else 
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int ret = check();
//	if (ret == 1)
//	{
//		printf("xiaodaun\n");
//	}
//	else
//	{
//		printf("daduan\n");
//	}
//	//int a = 1;
//	//char* p = (char*)&a;//char*p   *p其实访问的就是一个字节
//	//if (*p== 1)
//	//{
//	//	printf("xiaodaun\n");
//	//}
//	//else
//	//	printf("dadaun\n");
//	return 0;
//}
//#include<stdio.h>
//int main()

	/*int i = 7;
	char  arr1[];
	scanf_s("%c", &arr1);
	while (i>=6&&i<=13)
	{
		printf("%c", &arr1[i]);
		i++;
	}
	*/
//#include<stdio.h> 
//int main()
//{
//	char s[18];
//	scanf_s("%s", s);
//	printf("%c%c%c%c-%c%c-%c%c\n", s[6], s[7], s[8], s[9], s[10], s[11], s[12], s[13]);
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int a = 0;
//	int n,i;
//	int b = 0;
//
//	scanf_s("%d", &n);
//	if (n == 1)
//	{
//		printf("No");
//	}
//	else {
//		for ( i = 2; i  < n; i++)
//		{
//			if (n % i == 0)
//			{
//				a++;
//			}
//		}
//
//		if (a == 0)
//		{
//			printf("Yes");
//		}
//		else
//			printf("No");
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	int j = 0;
	double sum=0;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		sum = sum + (double)i / (2*i - 1);
		i = -i;
	}
	printf("%.3lf", sum);


	return 0;
}
