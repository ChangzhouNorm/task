#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);
	printf("%d", fib(num));
	return 0;
}
int fib(int num)
{
	if (num == 1 || num == 2)
	{
		return 1;
	}
	else
		return fib(num - 1) + fib(num - 2);
}