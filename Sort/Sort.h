#ifndef Sort_h
#define Sort_h
#include<stdio.h>
#include<stdlib.h>
#define MaxSize 20
#define int DataType
DataType r[MaxSize];

void Random_Numble();
void D_inSort(DataType *r,int n);
void Bubble_Sort(DataType *r,int n);
void ShellSort(DataType *r,int n,int *d,int t);
void Select_Sort(DataType *r,int n);

#endif

