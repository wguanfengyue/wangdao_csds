
void Delete_Bound(SqList *L,int s,int t){
    if(s > t || L->length == 0){
        printf("EMPTY");
        return;
    }
    int temp=0;
    for(int i=0;i<L->length;i++){
        if(L->data[i] < s || L->data[i] > t){
            L->data[temp] = L->data[i];
            temp++;
        }
        

    }
    L->length = temp;
    
}