#include <stdio.h>

int main()
{
	int h;
	float *p = NULL;
	int i, j;
	float score[6][5];
	for ( i = 0; i < 6; i++)
	{
		for ( j = 0; j < 4; j++)
		{
			score[i][j] = rand() % 41 + 60;
		}
	}
	for ( i = 0; i < 6; i++)
	{
		score[i][4] = score[i][0] + score[i][1] + score[i][2] + score[i][3];
	}

	h = findmax(score, p);
	for ( i = 0; i < 6; i++)
	{
		for ( j = 0; j < 5; j++)
		{
			printf("%f ", score[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("��%d�����", h);

}

int findmax(float s[][5], float *p)
{
	int i;
	p = &s[0][4];
	int h = 0;
	for ( i = 0; i < 6; i++)
	{
		if (*p < s[i][4])
		{
			p = &s[i][4];
			h = i + 1;
		}
	}

	return h;
}