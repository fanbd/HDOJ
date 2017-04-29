#include <stdio.h>

int main()
{
	int n, i, sum=0;
	while(scanf("%d", &n) != EOF)
	{
		i =1;
		sum =0;
		while(i <= n)
		{
			sum += i;
			i++;
		}
		printf("%d\n",sum   );
		printf("\n");
	}

	return 0;
}
