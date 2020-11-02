
//“™·—p
static int Ts(int a, int d)
{
	int buf;
	buf = a + (-1 * d);
	if (buf == 0) printf("an=%dn\n", d);
	if (buf < 0) printf("an=%dn%d\n", d, buf);
	if (buf > 0) printf("an=%dn+%d\n", d, buf);
	return 0;
}
static int Ts_an_dr(int a, int d, int n)
{
	printf("%d\n", a + ((n - 1) * d));
	return 0;
}
/*----------------------------*/
//“™”ä—p
static int Exp(int a, int b)
{
	int i = 1, c = a;
	while (i < b)
	{
		a *= c;
		i++;
	}
	if (b == 0)
	{
		return 1;
	}
	else if (b < 0)
	{
		printf("( ß„Dß)");
	}
	return a;
}

static int Th(int a, int r)
{
	printf("an=%dx%d^n-1\n", a, r);
	return 0;
}

static int Th_an_dr(int a, int r, int n)
{
	if (n - 1 == 0) printf("%d", a * 1);
	if (n - 1 > 0) printf("%d", a * (Exp(r, n - 1)));
	if (n - 1 < 0) printf("( ß„Dß)");
	return 0;
}
/*----------------------------*/

