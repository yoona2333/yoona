/*#include<stdio.h>
int main()
{
	int i = 10;
	printf("hello world\n");
}*/
/*#include<stdio.h>//����һ���ļ� stdio.h  std��һ����׼��  i  inpot   o  output    .hͷ�ļ�.
int main(void)  //���������ʾ�����Ĳ����������Ĳ�����ʾ�����ж�����м�����ö��ŷָ�
 //int �������� ���� ��������ں����б�ʾ�����ķ���ֵ  main���������������������ֻ��һ��������
{
	printf("hello          world\n");//printf��stdio.h��ϵͳ�ṩ�ĺ�������ʾ�ڱ�׼����豸�ϴ�ӡ�ַ���
	return 0;

}*/
/*#include<stdlib.h>
#include<stdio.h>
int main()
{
	int a;
	//system���Դ�һ���ⲿӦ�ó��������·����Ҫʹ��\\��/
	//system("calc");//������calc
	a=system("D:\\QQ\\Bin\\QQ.exe");
	printf("%d\n", a);
	return 0;
}*/
/*C���Էֲ�����
* Ԥ�����궨��չ�� ͷ�ļ�չ�� �������� ȥ��ע��
* ���룺����﷨ ��C����ת���ɻ������
* ��ࣺ���������ת��Ϊ�������ԣ��������룩
* ���ӣ���C�������������ӵ�������
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
//���ֲ�������ȫ�ֱ������ֳ�ͻʱ���ֲ�����
//#include<stdio.h>
//enum sex//ö�����͵ı�����δ���Ŀ���ȡֵ
//{
//	male=3,//����ֵ
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
//�ַ�������һ���ַ�����˫������������,�ַ����ڽ�β��λ��������һ��\0���ַ�,������Ϊ������־
//#include<stdio.h>
//int main()
//{
//	char arr[] = "abc";
//	char arr1[] = { 'a','\0','c','\0','g'};
//	int len = strlen("abc");
//
//	//printf("%d\n", len);
//	printf("%d\n", strlen(arr));//strlen��������\0���ҵ���ֹͣ
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
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//���������±��ʾ�ģ���һ��Ԫ�ص��±�Ϊ0
//	char ch[] = { 'a','b','c' };//����ȫ��ʼ����ʣ���Ĭ��Ϊ��
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
//	printf("%d\n", ~a);//~��������λȡ��  ��������ڴ��д洢���ǲ���
//	//һ�������Ƶı�ʾ������  ԭ�� ���� ����  
//	//ԭ��䷴��  ����λ���䣬ʣ��λȡ��
//	//����䲹��  �����1
//	//������ԭ�뷴�벹����ͬ
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = ++a;//ǰ��++����++����ʹ��
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
	int d = (a = b + 5, b = a + 6, c = 2 + b);//���ű��ʽ�Ǵ����������μ���ģ��������ʽ�Ľ�������һ�����ʽ�Ľ��
	printf("%d\n", d);//��Ŀ������
	return 0;
}*/
/*typedef unsigned int u_int;//�����ض���
#include<stdio.h>
int main()
{
	unsigned int num = 10;
	u_int num2 = 100;
	//int arr[] = { 0,1,2,3,4,5,6 };
	//printf("%d\n", arr[2]);//�±����ò�����

	return 0;
}*/
/*void test()
{
	static int a = 0;//����Χ�����٣������������ξֲ������ı����������ڣ��������Ǹı��˱����Ĵ洢����.
	a++;
	printf("%d\n", a);
}
#include<stdio.h>//static����ȫ�ֱ������ֲ�����������
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
//extern int a;//ֻ�������������ͣ�ȫ�ֱ��������������ж�����ʹ�á�
//static����ȫ�ֱ�����ʹ�����ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ�.c�ڲ�����ʹ��
//ȫ�ֱ�����������Դ�ļ��ڲ����Ա�ʹ�ã�����Ϊȫ�ֱ��������ⲿ�������ԣ�
//���Ǳ�static����֮��ͱ�����ڲ��������ԣ�����Դ�ļ��Ͳ������ӵ������̬��ȫ�ֱ�����
/*int main()
{
	int x = 20;
	int y = 30;
	int z = add(x, y);
	printf("%d\n",z);
	return 0;
}*/
//define��һ��Ԥ����ָ��
//#define max 100
//#define add(x,y) ((x)+(y))//��������4*8
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", 4 * add(2, 6));//4*2+6��������4*8
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	//int a = 10;
//	//printf("%p\n", &a);
//	//int*pa = &a;//*˵��pa��ָ�룬int˵��paִ�еĶ�����int����
//	//&a ȡa�ĵ�ַ
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;//�����ò�����*pa����ͨ��pa��ߵĵ�ַ�ҵ�a
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
	struct stu s = { "zhangsan",20,85.5 };//�ṹ��Ĵ����ͳ�ʼ��
	struct book b = { "sanguo",20.6,"ooo"};//�ṹ��Ĵ����ͳ�ʼ��

	printf("1%s %d %lf\n", s.name, s.age, s.score);//�ṹ���������Ա����
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
//#include<stdio.h>//0��ʾ�٣���0��ʾ��
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
//			//break;//whileѭ����break�������õ���ֹѭ��
//			continue;//whileѭ����continue����������������ѭ��continue��ߵĴ���ֱ��ȥ�жϲ��֣����Ƿ������һ��ѭ��
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
//	//eof(-1)�ļ�������־
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
//	printf("���������룺>");
//		scanf_s("%s", password);//�����ո��ͣ
//		printf("��ȷ������(Y/N):>");
//		//getchar();����\n
//			//int tmp = 0;
//		/*	while ((tmp = getchar()) != '\n')//�������� 
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
//	//	//i=i+1;ѭ�����ڲ�Ҫ�ı�ѭ������
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
//	//		continue;//��������ѭ������Ĵ���
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
//		printf("zhaonudao��%d\n", arr[mid]);
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
//		if (strcmp(password,"123456")== 0) //�����ַ����Ƚϣ�����ʹ��==��Ӧʹ��strcmp
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
	/*void swap(int* pa, int* pb)//��ַ�ύ��
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
		int j = 0;//2---n-1֮�����
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
		//�ҵ������±꣬�Ҳ�������-1
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
/*#include<stdio.h>//�ݹ飬�����Լ������Լ�
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
	print(num);//�ݹ�һ��һ��ķ�����
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
#include<stdio.h>
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
		return fib(n - 1) + fib(n - 2);*/
}
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int ret = fib(n);
	printf("%d\n", ret);
		return 0;
}