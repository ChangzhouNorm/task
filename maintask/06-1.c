#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);

	if ((num/10000==num%10)&&(num/1000%10 == num/10%10))
	{
		printf("%d  ����", num);
	}
	else
	{
		printf("%d������", num);
	}
	
	return 0;
}