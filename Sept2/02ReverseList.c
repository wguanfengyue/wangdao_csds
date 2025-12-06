#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100

typedef struct
{
    int data[MAXSIZE];
    int length;
} SqList;
void ReverseList(SqList *L)
{
    for (int i = 0; i < L->length / 2; i++)
    {
        int temp = 0;
        temp = L->data[i];
        L->data[i] = L->data[L->length - 1 - i];
        L->data[L->length - 1 - i] = temp;
    }
}

int main()
{
    SqList L;
    L.data[0] = 1;
    L.data[1] = 2;
    L.data[2] = 3;
    L.data[3] = 4;
    L.length = 4;
    printf("before\n");
    for (int i = 0; i < L.length; i++)
    {
        printf("%d ", L.data[i]);
    }
    ReverseList(&L);
    printf("\n");
    for (int i = 0; i < L.length; i++)
    {
        printf("%d ", L.data[i]);
    }
}
