#include"Sort.h"

void D_inSort(int *r,int n)
{
	int i,j;
	int tem;

	for (i=1;i<=n;i++)
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
