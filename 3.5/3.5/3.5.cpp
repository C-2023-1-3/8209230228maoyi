#include<stdio.h>
int main()
{
	int b = 1;
	for (int i = 9; i > 0; i--)
	{
		b = 2 * (b + 1);
	}
	printf("��һ���%d����", b);
	return 0;
}