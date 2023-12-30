#define _CRT_SECURE_NO_WARNINGS 1                          //VS平台scanf语句声明
#include <stdio.h>                                         //引用printf打印语句头文件
int main()                                                 //main函数（入口）
{
	int input = 0;                                         //整型input变量为0
	printf("你想要好好学习吗？\n");                        //打印并回车换行
	printf("如果要，请输入“1”，如果不，请输入“0”：\n");//打印并回车换行
	scanf("%d", &input);                                   //接收整型输入信息，并替换整型input的变量（第5行）
	if (input == 1)                                        //如果整型变量input等于1（一个“=”是赋值的含义，两个“=”是数学含义“等于”，此处用逻辑运算符号“等于”）
	{                                                      //此处if的{}以及else可以省去
		printf("你将获得一份好offer\n");                   //打印并回车
	}
	else                                                   //否则（即输入整型1以外的数）
	{
		printf("你将以体力劳动为代价，换取金钱\n");        //打印并回车
	}
	return 0;                                              //返回数据
}