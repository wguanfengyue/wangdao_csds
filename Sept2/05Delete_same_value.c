#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100

typedef struct{
    int data[MAXSIZE];
    int length;
}SqList;

void Delete_same_value(SqList *L){
    int i=0,j=0;
    for(int i = 1;i < L->length;i++){
        if(L->data[i] != L->data[j]){
            j++;
            L->data[j] = L->data[i];
           
        }
    
    }
    L->length = j+1;
}



