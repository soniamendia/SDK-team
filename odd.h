int odd (int array[], int len_array){
    int value;
    for (int i = 0; i<len_array; i++){
        value = array[i];
        if (value%2 != 0) printf("%d ", i);
    }

}