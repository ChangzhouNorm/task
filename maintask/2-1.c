#include <stdio.h>
#include <math.h>
int main()
{
	int num1, num2;
	printf("num1,num2:");
	scanf("%d,%d", &num1, &num2);
	printf("ƽ����:%f\n", pow(num1, 2) + pow(num2, 2));
	printf("������:%f\n", pow(num1, 3) + pow(num2, 3));
	return 0;
}