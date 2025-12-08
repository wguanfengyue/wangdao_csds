#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100

typedef struct
{
    int data[MAXSIZE];
    int length;
} SqList;

int half_sort(SqList *L,int target){
    int left = 0;
    int right = L->length-1;
    int mid ;
    
    while(left <= right){
        mid = left + (right -left)/2;
        if(target > L->data[mid]){
            left = mid +1;
        }
        else if(target < L->data[mid]){
            right = mid -1;
        }
        else {
            return mid;
        }
    }
    return -1;
}
int Insert_Inorder(SqList *L,int x){
    if(L->length >= MAXSIZE){
        return 0;
    }
   int i = L->length - 1;
   while(i>=0 && x < L->data[i]){
    L->data[i+1] = L->data[i];
    i--;
   }
   L->data[i+1] = x;
   L->length++;
   return 1;
}







  
    void function08(SqList *L,int target){
    int val = half_sort(L,target);
    if(val == -1){
        Insert_Inorder(L,target);
    }
    else{
        if(val <L->length-1){
        int temp = L->data[val];
        L->data[val] = L->data[val+1];
        L->data[val+1] = temp;
    } else{
        printf("找到%d,最后一个元素无法交换。\n",target);
}

     


    

        