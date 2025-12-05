#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE 100

typedef struct{
    int data[MAXSIZE];
    int length;
}SqList;

int Merge_order_List(SqList *L,SqList *T, SqList *Result){
    if(L->length + T->length > MAXSIZE) {
        return 0;
    }
    int i = 0;
    int j = 0;
    int k = 0;

    while(i < L->length && j < T->length){
        if(L->data[i] <= L->data[j]){
            Result->data[k++]=L->data[i++];
        }else{
            Result->data[k++]=T->data[j++];
        }
    }

    while(i<L->length){
        Result->data[k++]=L->data[i++];
    }

    while(j<T->length){
        Result->data[k++]=T->data[j++];
    }
    Result->length =k;
    return 1;
