#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100

typedef struct
{
    int data[MAXSIZE];
    int length;
} SqList;
void ReverseList(SqList *L){
    int temp =0;
    for(int i=0;i<L->length/2;i++){
        temp = L->data[i];
        L->data[i] = L->data[L->length-1-i];
        L->data[L->length-1-i] = temp;
    }
}
void Reverse_Location(SqList *L,SqList *M){
    ReverseList(L);
    ReverseList(M);
    if(L->length + M->length > MAXSIZE){
        return;
    }
    for(int i = 0;i<M->length;i++){
        L->data[L->length + i] = M->data[i];
    }
    L->length = L->length + M->length;
    ReverseList(L);
}