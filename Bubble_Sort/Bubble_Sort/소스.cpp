#include<stdio.h>

void main(int argc, char* argv[])
{
	int array[10] = { 3,2,4,1,5,6,9,8,7,0 };
	int index, min, tmp;
	min = 9999;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10-i-1; j++)
		{
			if (array[j] > array[j + 1]) 
			{
				tmp = array[j];
				array[j] = array[j+1];
				array[j+1] = tmp;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
}