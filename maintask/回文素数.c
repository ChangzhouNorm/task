#include <stdio.h>
#include <math.h>
int check(int);
int main()
{
	for (size_t i = 100; i < 1000; i++)//100-1000ѭ��
	{
		int result = 0;
		if (i/100==i%10)//���ǲ��Ǹ����ģ��ǵĻ��������£����ǵĻ��ص������for��� ��i++
		{
			result=check(i);//һ��check���� �ж��ǲ��Ǹ����� �ǵĻ�����0�����Ƿ���1
			if (result==0)
			{
				printf("%d\t", i);//���������ж϶�������ô�ͼ��ǻ���������������ô�����
			}
		}
	}
	return 0;
}

int check(int s)
{
	for (size_t i = 2; i <= sqrt(s); i++)
	{
		if (s%i==0)
		{
			return -1;
		}
	}
	return 0;
}