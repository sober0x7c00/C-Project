#include <stdio.h>
//int main()
//{
//	printf("C：\test\test.c\n");//当打印"C：\test\test.c"这串字符时，\t会被检测为转义字符
//	printf("C：\\test\\test.c\n");//打印"C：\test\test.c"防止转义，需用“\”
//	//例如
//	printf("\"");
//	printf("%c",'\'');
//	printf("\\");
//	return 0;
//}


//int main()
//{
//	printf("\a\a\a\a\a");//蜂鸣警报
//	return 0;
//}


//int main()
//{
//	printf("\42");//\ddd型，42的八进制转十进制，在ACSII码表中对应 "
//	return 0;
//}


int main()
{
	printf("\x42");//\xdd型，42的十六进制转十进制，在ACSII码表中对应 B
	return 0;
}
