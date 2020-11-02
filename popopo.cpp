#include <stdio.h>
#include "../popopo/momo.cpp"
int main()
{
	int a, d, n, mode, sw;
	printf("等差:1 等比:2\n");
	scanf("%d", &mode);
	switch (mode)
	{
	case 1:
		printf("初項\n");
		scanf("%d", &a);
		printf("公差\n");
		scanf("%d", &d);
		printf("an導出:1 項数入力:2\n");
		scanf("%d", &sw);
		if (sw == 1)
		{
			Ts(a, d);
		}
		else if (sw == 2)
		{
			Ts(a, d);
			printf("項数\n");
			scanf("%d", &n);
			Ts_an_dr(a, d, n);
		}
		else
		{
			printf("( ﾟДﾟ)");
		}
		return 0;
		break;

	case 2:
		printf("初項\n");
		scanf("%d", &a);
		printf("公差\n");
		scanf("%d", &d);
		printf("an導出:1 項数入力:2\n");
		scanf("%d", &sw);
		if (sw == 1)
		{
			Th(a, d);
		}
		else if (sw == 2)
		{
			Th(a, d);
			printf("項数\n");
			scanf("%d", &n);
			Th_an_dr(a, d, n);
		}
		return 0;
		break;
	default:
		printf("( ﾟДﾟ)");
		break;
	}

}
