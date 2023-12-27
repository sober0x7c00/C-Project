#include <stdio.h>//包含头文件（引用打印函数）
int main()//main函数（“入口”）
{
	int age = 20;//例1：给整型函数年龄变量赋值20
	double weight = 75.3;//例2：给双精度浮点函数体重变量赋值75.3
	age = age + 1;//例1：变量+1
	weight = weight - 10;//例2：变量-10
	printf("%d\n", age);//例1：打印整型变量年龄回车
	printf("%lf\n", weight);//例2：打印双精度浮点变量体重回车
	return 0;//返回结果
}
