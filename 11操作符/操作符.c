#include <stdio.h>
int main()
{
	//算术操作符：+加 -减 *乘 /除---------------------------------------
	// -------------------------------------------------------/除以操作符：

	//int a = 9 / 2;
	//printf("%d\n", a);//结果为4，/运算符算的是是整数商，即9除以2，商4余1

	//float a = 9 / 2.0;
	//printf("%f\n", a);// /操作符两边是整数时，是整数除法，有余数；如要只得商，要用浮点函数，且/操作符两边有一个数有小数点

    //------------------------------------------------------%模操作符（取余数）

	//int a = 9 % 2;
	//printf("%d\n", a);//结果为1，%运算符算的是是整数余数，即9除以2，商4余1

	//----------------------------------------------------------------------
	//移位操作符：<<左移   >>右移------------------------------------------------
	//移的是二进制的位数，左移右补0，右移左补0
	int a = 2;//a是个整型，2是放入整形的，所以也是整型，一个整型是4字节，一个字节是8比特，所以2二进制是32比特
	//00000000 00000000 00000000 00000010
	int b = a << 1;
	//左移即
	//00000000 00000000 00000000 00000100
	//100二进制转十进制为4
	printf("%d\n", b);
	//结果为4

	//-----------------------------------------------------------------------
	//位操作符：&按位与  |按位或   ^按位异或---------------------------------


	//赋值操作符：=赋值 +=加等 -=减等 *=乘等 /=除等 &=按位与等 ^=按位异或等 |=按位或等 >>右移等 <<左移等
	//int a = 2;
	//a = a + 5;//可写为a += 5; 把原变量的赋值加5
	//a = a - 3;//可写为a -= 3;
	//a = a % 3;//可写为a %= 3; 把原变量的赋值除以3求余数

	//----------------------------------------------------------------------------
	//单目操作符：！逻辑反操作  -负值  +正值  &取地址  sizeof操作数的类型长度（单位为字节）  ~对一个数的二进制取反  --前置后置--  ++前置后置++  *间接访问操作符（解引用操作符）  （类型）强制类型转换


	return 0;
}

