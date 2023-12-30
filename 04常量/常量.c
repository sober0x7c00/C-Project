#include <stdio.h>
#define MAX 1000//三，声明常量
int main()
{
	int n = MAX;
    printf("n = %d\n", n);//打印则为声明常量1000
    return 0;
}
//一，字面常量
// int main()
// {
// 3.14；
// 10；
// 'a'；
// 'abcd'
// return 0;
// }
//二，const修饰常量
//1.
//int num = 10;//可变常量
//num = 20;//重新赋值常量
//printf("num = %d\n", num);//打印num，此时值为20
//return 0;
// 2.
//const int num = 10;//当被const修饰后，num值就变为常变量（具有常属性，但还是变量），就无法再次赋值
//num = 20;//无法再次赋值num
//printf("num = %d\n", num)
//3.
//int arr[10] = { 0 };//10个元素创建数组
//int n = 10;
//int arr2[n] = {0}//指定数组大小，n应为常量，此时不行
//当用const int n = 10;  仍然不行，所以const修饰变量，是为具有常属性的变量，本质还是变量
	