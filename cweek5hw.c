#include <stdio.h>
int main(void)
{
	int num;
	int turn = 1;
	int count = 0;
	printf("please enter a number: ");
	scanf("%d", &num);
	for (; turn <= num; turn++)
	{
		if (num % turn == 0)
		{
			count++;
		}
		else
		{
			continue;
		}
	}
	if (count == 2)
	{
		printf("it is a prime number");
	}
	else
	{
		printf("it is not a prime number");
	}

	return 0;
}

