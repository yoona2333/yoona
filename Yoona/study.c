/*#include<stdio.h>
int main()
{
	int i = 10;
	printf("hello world\n");
}*/
//两个正斜杠表示注释，行注释，只能注释一行.
/*可以注释多行*/
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