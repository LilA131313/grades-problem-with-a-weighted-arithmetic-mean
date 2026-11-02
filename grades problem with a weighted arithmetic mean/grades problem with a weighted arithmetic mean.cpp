#include <stdio.h>

int main(void)
{
	int a[100], n, i, b[11] = { 0 };
	float  mean = 0;

	printf("the number of grades is: ");
	scanf_s("%d", &n);

	printf("the grades are: ");
	for (i = 0;i < n;i++)
		scanf_s("%d", &a[i]);

	for (i = 0;i < n;i++)
		b[a[i]]++;

	for (i = 1; i <= 10; i++)
		if (b[i] != 0)
		{
			printf("the number of grades of %d is %d\n", i, b[i]);
			mean = mean + i * b[i];
		}
	mean = mean / n;

	printf("the arithmetic mean for all the grades is: %5.2f", mean);
}