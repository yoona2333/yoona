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
#include<stdio.h>
int main()
{ 
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr[0]));
	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
	return 0;
}