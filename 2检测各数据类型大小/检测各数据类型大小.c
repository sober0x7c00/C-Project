#include <stdio.h>//包含头文件（引用打印函数）
int main()//main函数（“入口”）
{
	printf("%d\n", sizeof(char));//打印整数回车，计算char数据类型占多少byte
	printf("%d\n", sizeof(short));//同上
	printf("%d\n", sizeof(int));//同上
	printf("%d\n", sizeof(long));//同上
	printf("%d\n", sizeof(long long));//同上
	printf("%d\n", sizeof(float));//同上
	printf("%d\n", sizeof(double));//同上

	return 0;//返回数值结果
}
