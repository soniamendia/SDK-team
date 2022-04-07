void sortArray(int array[], int len){
    int value1;
    int value2;
    for (int x = 0; x < len; x++){
        for (int i = 0; i < len; i++){
            value1 = array[i];
            value2 = array[i+1];
            if (value1>value2){
                array[i] = value2;
                array[i+1] = value1;
            }
        }
    }
    for (int i = 0; i < len; i++){
        printf(" %d ",array[i]);
    }
}