#include <stdio.h>



int twonum(int num)
{
	if (num / 2 == 0 || num / 2 == 1)
	{
		printf("%d%d", num / 2, num % 2);
	}
	else
	{
		twonum(num / 2);
		printf("%d", num % 2);
	}
}

int main(void)
{
	int num;
	scanf("%d", &num);
	twonum(num);
	return 0;
}
