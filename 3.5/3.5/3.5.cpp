#include<stdio.h>
int main()
{
	int b = 1;
	for (int i = 9; i > 0; i--)
	{
		b = 2 * (b + 1);
	}
	printf("第一天吃%d个桃", b);
	return 0;
}