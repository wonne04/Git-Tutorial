#include <stdio.h>
int main(void)
{
	int transfee = 0, lifefee = 0, extrafee = 0, needyfee = 0;
	int stranssale = 0, ktranssale = 0, slifesale = 0, klifesale = 0, totalsale = 0;
	double stotalsalerate = 0.0, ktotalsalerate = 0.0;
	do
	{
		printf("월 평균 대중교통 요금: ");
		scanf("%d", &transfee);
		if (transfee < 0)
			printf("0원 이상의 값으로 다시 입력하세요.\n");
	} while (transfee < 0);

	do
	{
		printf("월 평균 생활서비스 결제액: ");
		scanf("%d", &lifefee);
		if (lifefee < 0)
			printf("0원 이상의 값으로 다시 입력하세요.\n");
	} while (lifefee < 0);

	do
	{
		printf("월 평균 기타 결제액: ");
		scanf("%d", &extrafee);
		if (extrafee < 0)
			printf("0원 이상의 값으로 다시 입력하세요.\n");
	} while (extrafee < 0);

	needyfee = transfee + lifefee + extrafee;

	if (needyfee < 200000)
	{
		stranssale=0;
		slifesale = 0;
		ktranssale = 0;
		klifesale = 0;
	}
	else if (200000 <= needyfee && needyfee < 500000)
	{
		if (20000<=transfee)
		{
			stranssale = 2000;
			ktranssale = 2000;
		}
		else
		{
			stranssale = transfee / 10;
			ktranssale = transfee / 10;
		}

		if (lifefee < 100000)
		{
			slifesale = lifefee / 50;
			klifesale = lifefee / 50;
		}
		else if (100000 <= lifefee && needyfee < 400000)
		{
			slifesale = 2000;
			klifesale = lifefee / 50;
		}
		else
		{
			slifesale = 2000;
			klifesale = 8000;
		}


	}
	else
		if (transfee < 20000)
		{
			stranssale = transfee / 10;
			ktranssale = transfee / 10;
		}
		else if (20000 <= transfee && transfee < 50000)
		{
			stranssale = transfee / 10;
			ktranssale = 2000;
		}
		else
		{
			stranssale = 5000;
			ktranssale = 2000;
		}
		if (lifefee < 250000)
		{
			slifesale = lifefee / 50;
			klifesale = lifefee / 50;
		}
		else if (250000 <= lifefee && lifefee < 400000)
		{
			slifesale = 5000;
			klifesale = lifefee / 50;
		}
		else
		{
			slifesale = 5000;
			klifesale = 8000;
		}

	stotalsalerate = (((double)stranssale + slifesale) / needyfee)*100;
	ktotalsalerate = (((double)ktranssale + klifesale) / needyfee)*100;

	printf("신한 K-패스 체크카드의 예상 할인 금액은 %d원이며, 할인율은 %.2f%%입니다.\n", stranssale + slifesale, stotalsalerate);
	printf("국민 k-패스 체크카드의 예상 할인 금액은 %d원이며, 할인율은 %.2f%%입니다.\n", ktranssale + klifesale, ktotalsalerate);

	if (stotalsalerate > ktotalsalerate)
	{
		printf("따라서 신한 k-패스카드가 더 나은 선택입니다.\n");
	}
	else if (stotalsalerate < ktotalsalerate)
	{
		printf("따라서 국민 k-패스카드가 더 나은 선택입니다.\n");
	}
	else
	{
		printf("따라서 어느 것을 이용해도 혜택이 동일합니다.\n");
	}

	return 0;
}
