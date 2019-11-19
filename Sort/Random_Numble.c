#include"Sort.h"
#include<time.h>

#define random_1(a, b) ((rand()%(b - a))+a)
#define random_2(a, b) ((rand()%(b - a + 1))+a)

void Random_Numble()
{
	srand((int)time(NULL));
	DataType r[MaxSize];
	for (int i=0; i <10; i++)
	{
		r[i] = random_1(1,20);
	}
	for()
	printf("%d\t",r[i]);
	return 0;
}
