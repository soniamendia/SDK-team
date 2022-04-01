int max(int array[],int len_array){
    int val1;
    int val2;
    int val_max = array[0];
    int index;

    for (int i = 0; i < len_array-1; i++){
        val1 = array[i];
        val2 = array[i+1];
        if (val1>val2){
            if (val1>val_max) val_max = val1;
        }else{
            if (val2>val_max) val_max = val2;
        }
    }
    
    for (int i = 0; i < len_array; i++){
        if (array[i]==val_max){
            index = i;
            break;
        }
    }   
    return index;
}