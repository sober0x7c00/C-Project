#define _CRT_SECURE_NO_WARNINGS 1//C����scanf(���뺯��)�淶����VSֻ�Ƽ���scanf_s,��ҪCȫƽ̨���У�����VS�Ӵ�ǰ׺
#include <stdio.h>//����ͷ�ļ������ô�ӡ������
int main()//main����������ڡ���
{
	int a = 0;//����a��ֵ0
	int b = 0;//����b��ֵ0
	int sum = 0;//���͡��͡���ֵ0
	scanf("%d %d", &a, &b);//�������������м�ո�%d %d��,����ֵһ������aһ������b�� &a, &b��
	sum = a + b;//���͡�=a��ֵ+b��ֵ
	printf("sum = %d\n", sum);//��ӡ����sum=�����س�
	return 0;//��������
}