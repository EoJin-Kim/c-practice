#include<cstdio>

int main(int argc, char* argv[]) 
{
	int array[10] = { 5,6,2,3,1,9,4,8,7,10 };
	int tmp,index, min = 9999;
	for (int i = 0; i < 10; i++)
	{
		for (int j = i; j < 10; j++)
		{
			if (min > array[j])
			{
				index = j;
				min = array[j];
			}
		}

		tmp = array[i];
		array[i] = array[index];
		array[index] = tmp;
		min = 9999;
		

	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
}