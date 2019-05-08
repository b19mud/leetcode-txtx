#include <stdio.h>
#include <stdlib.h>
#include "malloc.h"
#include "pch.h"
#include <iostream>
using namespace std;
#define MaxSize 50
typedef char ElemType;
typedef struct {
	ElemType data[MaxSize];
	int length;
}SqList;

void InitList(SqList *&L)
{
	L = (SqList *)malloc(sizeof(SqList));
	L->length = 0;
}

void DestyoyList(SqList *L)
{
	free(L);
}

bool ListEmpty(SqList *L)
{
	return (L->length==0);
}

int ListLength(SqList *L)
{
	return (L->length);
}

void DispList(SqList *L)
{
	int i;
	if (ListEmpty(L)) return;
	for (i = 0; i < L->length; i++)
	{
		printf("%c", L->data[i]);
	}
}

bool GetElem(SqList *L, int i, ElemType &e)
{
	if (i<1 || i>L->length)
	{
		return false;

	}
	e = L->data[i - 1];
	return true;
}

int LocateElem(SqList *L, ElemType e)
{
	int i = 0;
	while (i < L->length&&L->data[i] != e)
		i++;
	if (i >= L->length)
	{
		return 0;
	}
	else
		return i + 1;
}

bool ListInsert(SqList *&L,int i, ElemType e)
{
	int j = 0;
	if (i<1 || i>L->length + 1)
		return false;
	i--;
	for (j = L->length;j>i;j--)
	{
		L->data[j] = L->data[j - 1];
	}
	L->data[i] = e;
	L->length++;
	return true;

}

bool ListDelete(SqList *&L, int i, ElemType &e)
{
	int j;
	if (i<1 || i>L->length - 1)
	{
		return false;
	}
	i--;
	e = L->data[i];
	for (j = i; j < L->length - 1; j++)
	{
		L->data[j] = L->data[j + 1];
		L->length--;
		return true;
	}
}

int main()
{
	SqList *L;
	ElemType e;
	printf("顺序表的基本运算\n");
	InitList(L);
	printf("尾插法插入5个元素\n");
	ListInsert(L, 1, 'a');
	ListInsert(L, 2, 'b');
	ListInsert(L, 3, 'c');
	ListInsert(L, 4, 'd');
	ListInsert(L, 5, 'e');
	printf("输出顺序表\n");
	DispList(L);
	printf("在第四个元素的位置上插入f\n");
	ListInsert(L, 4, 'f');
	printf("输出顺序表\n");
	DispList(L);
	DestyoyList(L);
}
