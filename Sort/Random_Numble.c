#include"Sort.h"
#include<time.h>

#define random_1(a, b) ((rand()%(b - a))+a)
#define random_2(a, b) ((rand()%(b - a + 1))+a)

int Random_Numble()
{
	srand((int)time(NULL));
	DataType r[MaxSize];
	for (int i=0; i <= MaxSize; i++)
	{
		r[i] = random_1(1,20);
	}
	return 0;
}
