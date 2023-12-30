#define _CRT_SECURE_NO_WARNINGS 1//C语言scanf(输入函数)规范，但VS只推荐用scanf_s,若要C全平台运行，须在VS加此前缀
#include <stdio.h>//包含头文件（引用打印函数）
int main()//main函数（“入口”）
{
	int a = 0;//整型a赋值0
	int b = 0;//整型b赋值0
	int sum = 0;//整型“和”赋值0
	scanf("%d %d", &a, &b);//输入两个数，中间空格（%d %d）,两个值一个放在a一个放在b（ &a, &b）
	sum = a + b;//“和”=a内值+b内值
	printf("sum = %d\n", sum);//打印整型sum=，并回车
	return 0;//返回数据
}