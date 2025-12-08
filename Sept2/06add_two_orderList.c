#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE 100

typedef struct{
    int data[MAXSIZE];
    int length;
}SqList;

int Merge_two_order_List(SqList *L,SqList *T,SqList *M){
    int i=0,j=0,k=0;
  
    while(i<L->length && j<T->length){
        if(L->data[i] < T->data[j]){
        M->data[k] = L->data[i];
        i++;
        k++;
    }
    else{
        M->data[k] = T->data[j];
        k++;
        j++;

    }
}
    while(i < L->length){
        M->data[k] = L->data[i];
        i++;
        k++;
    }
    
    while(j < T->length ){
        M->data[k] = T->data[j];
        j++;
        k++;
    }
    M->length = k;
}
void PrintList(SqList M){
    for(int i=0;i<M.length;i++){
        printf("%d ",M.data[i]);
    }
}

