int find(int array[],int len_array,int value2find){
    int index = -1;
    int value;

    for (int i = 0; i < len_array; i++){
        value = array[i];
        if (value == value2find) index = i;
    }
    return index;
}