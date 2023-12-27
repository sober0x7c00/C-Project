#include <stdio.h>
enum Sex//枚举关键词（格式）
{
	MALE,//男性（例举所有未来趋势）
	FEMALE,//女性
	SECRET//保密
};
int main()
{
	enum Sex s = MALE;//s为性别的常量
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);

	return 0;
}