#include"Sort.h"

void main()
{
	int i,j;
	int tem;
	r[i] = Random_Numble;
	for (i=1;i<=MaxSize;i++)
	{
		tem = r[i];
		j=i-1;

		while(j>0 && tem<r[j])
		{
			r[j+1] = r[j];
			j--;
		}
		r[j+1] = tem;
	}
}
