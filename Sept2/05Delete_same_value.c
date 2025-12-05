void Delete_same_value(SqList *L){
    if(L->length == 0) return;
    int i=0;
    for(int j=i;j<L->length;j++){
        if(L->data[j] != L->data[i]){
            i++;
            L->data[i] = L->data[j];
        }
    
    }
    L->length = i + 1;
}