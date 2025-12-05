void Delete(SqList *L,int i,int *e){
    if(i<1 || L->length){
        return 0 ;
    }

    *e = L->data[i-1];
    for(int j=i;j<L->length;j++){
        L->data[j-1] = L->data[j];
    }
    L->length--;

    return 1;


}

    