#include <stdio.h>
enum Sex//ö�ٹؼ��ʣ���ʽ��
{
	MALE,//���ԣ���������δ�����ƣ�
	FEMALE,//Ů��
	SECRET//����
};
int main()
{
	enum Sex s = MALE;//sΪ�Ա�ĳ���
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);

	return 0;
}