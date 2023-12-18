#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

	if ( a == 5 || a == 0)
		printf("0\n");
	else if ( a % 10 == 0)
		printf("%d\n", a);
	else if ( a % 10 < 5)
		{
			int t = a % 5;
			printf("%d\n", a - t);
		}
	else
	{
		int  t = a % 10;
		printf("%d\n", a + (10 - t));
	}

	return 0;
//aufhafi
}
