#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��������
int Add(int x, int y)//����һ��������������������x������y��������
{
	int z = 0;//�������ͱ���z����ֵ0
	z = x + y;//��ѧ����z=x+y
	return z;//����zֵ
}
int main()
{
	int num1 = 0;//�������ͱ���num1����ֵ0
	int num2 = 0;//�������ͱ���num1����ֵ0
	scanf("%d %d", &num1, &num2);//�Ըø�ʽ���������ͣ����ֱ𴢴���num1,num2(�ı�ԭ����)
	int sum = Add(num1, num2);//����һ������sum��sum���� ��num1 num2����Add���������ֵ������ǰ�Ĵ�����Add������
	printf("%d\n", sum);//��ӡ����sum��ֵ
	return 0;//����
}