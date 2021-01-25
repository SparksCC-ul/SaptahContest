#include<stdio.h>
int main()
{
	int a[10][3], i, n, j, t;
	printf("Enter no of inputs\n");
	scanf_s("%d\n", &n);
	printf("Enter the elements \n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf_s("%d ", &a[i][j]);

		}
		printf("\n");
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d\n", a[i][j] + a[i][j]);
		}

		
	}
	
	return 0;

}
