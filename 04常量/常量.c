#include <stdio.h>
#define MAX 1000//������������
int main()
{
	int n = MAX;
    printf("n = %d\n", n);//��ӡ��Ϊ��������1000
    return 0;
}
//һ�����泣��
// int main()
// {
// 3.14��
// 10��
// 'a'��
// 'abcd'
// return 0;
// }
//����const���γ���
//1.
//int num = 10;//�ɱ䳣��
//num = 20;//���¸�ֵ����
//printf("num = %d\n", num);//��ӡnum����ʱֵΪ20
//return 0;
// 2.
//const int num = 10;//����const���κ�numֵ�ͱ�Ϊ�����������г����ԣ������Ǳ����������޷��ٴθ�ֵ
//num = 20;//�޷��ٴθ�ֵnum
//printf("num = %d\n", num)
//3.
//int arr[10] = { 0 };//10��Ԫ�ش�������
//int n = 10;
//int arr2[n] = {0}//ָ�������С��nӦΪ��������ʱ����
//����const int n = 10;  ��Ȼ���У�����const���α�������Ϊ���г����Եı��������ʻ��Ǳ���
	