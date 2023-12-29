#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//创建函数
int Add(int x, int y)//创建一个含有两个变量（整型x和整型y）的整型
{
	int z = 0;//创建整型变量z，赋值0
	z = x + y;//数学定义z=x+y
	return z;//返回z值
}
int main()
{
	int num1 = 0;//创建整型变量num1，赋值0
	int num2 = 0;//创建整型变量num1，赋值0
	scanf("%d %d", &num1, &num2);//以该格式接受两整型，并分别储存在num1,num2(改变原变量)
	int sum = Add(num1, num2);//创建一个整型sum，sum等于 将num1 num2放入Add函数计算的值（调用前文创建的Add函数）
	printf("%d\n", sum);//打印整型sum的值
	return 0;//返回
}