#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100

typedef struct{
    int data[MAXSIZE];
    int length;
}SqList;

int DeleteBound(SqList *L,int s,int t){
    int k=0;
    if(L->length == 0 || s >= t){
        return;
        exit(1);
    }

    for(int i=0;i<L->length;i++){
        if(L->data[i] < s && L->data[i] > t){
            L->data[k] = L->data[i];
            k++;
        }
    }
    L->length = k;

    