#include<stdio.h>

void main(int argc, char* argv[])
{
	int i, j, tmp;
	int array[10] = { 5,2,3,1,4,7,6,8,9,10 };

	for (i = 0; i < 9; i++)
	{
		j = i;
		while (array[j] > array[j + 1])
		{
			tmp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = tmp;
			j--;
		}
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);

	}
	printf("%d ", array[-1]);
}