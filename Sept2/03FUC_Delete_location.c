#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100

typedef struct{
    int data[MAXSIZE];
    int length;
}SqList;

void Delete(SqList *L,SqList *T,int e){
    int i=0,j=0;
    for(int i=0;i<L->length;i++){
        if(L->data[i] != e){
            T->data[j] = L->data[i];
            j++;
        }
    }
    T->length = j;

    
}
void PrintList(SqList L){
    for(int i = 0 ; i<L.length;i++){
        printf("%d ",L.data[i]);
    }
    printf("\n");
}

int main(){
    SqList L,T;
    // 初始化测试数据：1, 3, 5, 3, 7
    L.length = 5;
    L.data[0] = 1;
    L.data[1] = 3;
    L.data[2] = 5;
    L.data[3] = 3;
    L.data[4] = 7;

    int e = 3;
    PrintList(L);
    Delete(&L,&T,e);
    PrintList(T);
    return 0;
}