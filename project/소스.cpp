#include <stdio.h>
int main()
{
	int a = 0, b = 0;
	int arr[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		scanf("%d\n", &arr[i]);
	}
	
	for (int i = 0; i < 10; i++)
	{
		arr[i] = arr[i]%42;
	}

	for (int i = 0; i < 10; i++)
	{
		if (a!=arr[i])
		{
			a = arr[i];
			b += 1;
		}
	}
	printf("%d", b);
}