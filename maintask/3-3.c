#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);
	if (num%15==0)
	{
		printf("%d���Ա�3��5����", num);
	}
	else
	{
		printf("%d�����Ա�3��5����", num);
	}
	return 0;
}