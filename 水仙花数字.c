#include<stdio.h>
#include<stdlib.h>

#include <stdio.h>
int main()
{
	//������λ��num,��λ��sd,ʮλ��td,��λ��hd
	int num, sd, td, hd;
	//ѭ��������λ��
	for (num = 100; num<1000; num++)
	{
		//��ȡ��λ����num��λ�ϵ�����
		hd = num / 100;
		//��ȡ��λ����numʮλ�ϵ�����
		td = (num % 100) / 10;
		//��ȡ��λ����num��λ�ϵ�����
		sd = num % 10;
		//ˮ�ɻ�����������ʲô��
		if (num == hd*hd*hd + td*td*td + sd*sd*sd)
		{
			printf("ˮ�ɻ����֣�%d\n", num);
		}
	}
	system("pause");
}