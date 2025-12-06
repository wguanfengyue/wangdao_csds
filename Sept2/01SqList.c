#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100

typedef struct {
    int data[MAXSIZE];
    int length;
}SqList;
int Delete(SqList *L){
if(L->length == 0) {
    printf("empty\n");
    exit(1);
}

int min_value = L->data[0];
int pos = 0;
for(int i =0;i<L->length;i++){
    if(L->data[i]< min_value){
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
    L.data[0] = 1;
    L.data[1] = 4;
    L.data[2] = 3;
    L.data[3] = 2;
    L.length = 4;
    printf("before");
    printf("\n");
    for(int i=0;i<L.length;i++){
    printf("%d ",L.data[i]);
    }
    printf("\n");
    int val = Delete(&L);
    printf("delete value:%d\n",val);
    for(int i=0;i<L.length;i++){
    printf("%d ",L.data[i]);
    }
}
    







    

























