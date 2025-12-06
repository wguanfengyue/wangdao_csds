#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100

typedef struct {
    int data[MAXSIZE];
    int length;
}SqList;
void ReverseList(SqList *L){
    for(int i=0;i<L->length/2;i++){
        int temp = 0;
        temp = L->data[i];
        L->data[i] = L->data[L->length-1-i];
        L->data[L->length-1-i] = temp;
    }
}

int main(){
    

