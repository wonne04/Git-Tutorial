#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	double num1;
	double num2;
	printf("Please enter kilometer: ");
	scanf("%lf", &num1);
	num2 = num1 / 1.609;
	printf("%.1fkm is equal to %.1fmiles.\n", num1, num2);
	return 0;
}