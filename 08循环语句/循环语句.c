//如果你写出30000行有效代码，你将获得一份好offer
#include <stdio.h>//引用打印头文件
int main()//main函数入口
{
	int line = 0;//创建一个整型变量line，line赋值为0
	while (line < 30000)//当整型变量line的值小于30000时，循环while{}内的代码    while:循环语句
	{
		printf("写代码：%d\n", line);//打印“写代码：‘整型值’”整型值为line整型变量的值
		line++;//整型变量line的值数学含义递增1（++后不跟值，默认递增1）（每循环一次就给下次line值递增1）
	}
	if (line == 30000)//如果整型变量line数学含义值为30000，执行if后{}内代码
	{
		printf("好offer\n");//打印并回车
	}
	return 0;//返回
}