#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100

typedef struct {
    int length;
    int data[MAXSIZE];
}SqList;

int DeleteMin(SqList *L){
    if(L->length == 0){
        printf("EMPTY");
        exit(1);
    }
    int min_value = L->data[0];
    int pos = 0;
    

    for(int i=1;i<L->length;i++){
        if(L->data[i]<min_value){
             min_value = L->data[i];
             pos = i;
        }

        
    }

    L->data[pos] = L->data[L->length-1];
    L->length--;

    return min_value;
}

int main(){
    SqList L;
    L.length =5;
    L.data[0] = 10;
    L.data[1] = 2;
    L.data[2] = 56;
    L.data[3] = 8;
    L.data[4] = 99;
    
    printf("before print\n");
    for(int i=0;i<L.length;i++){
        printf("%d ",L.data[i]);
    }
    printf("\n");
    int val = DeleteMin(&L);
    printf("%d\n",val);


    for(int i=0;i<L.length;i++){
        printf("%d ",L.data[i]);
    }
    return 0;

    }


    

























