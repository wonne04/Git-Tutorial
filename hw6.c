#include <stdio.h>

int main(void)
{
	int num1, num2, num3, num4, num5;
	int i;
	int counth = 0;
	int countj = 0;
	printf("Please input five integers: ");
	scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

	int arr1[5];
	arr1[0] = num1;
	arr1[1] = num2;
	arr1[2] = num3;
	arr1[3] = num4;
	arr1[4] = num5;
	int odd[5];
	int evens[5];

	for (i = 0; i < 5; i++)
	{
		if (arr1[i] % 2 == 1)
		{
			counth += 1;
			odd[counth - 1] = arr1[i];
		}
		else
		{
			countj += 1;
			evens[countj - 1] = arr1[i];
		}
	}

	printf("Odd numbers: ");
	for (i = 0; i < counth; i++)
	{
		printf("%d ", odd[i]);
	}
	printf("\n");
	printf("Even numbers: ");
	for (i = 0; i < countj; i++)
	{
		printf("%d ", evens[i]);
	}
	return 0;
}