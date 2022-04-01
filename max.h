int min(int arr[], int len){
    int indexMin = 0;
    for(int i = 1; i < len; i++){
        if(arr[i] > arr[indexMin]){
            indexMin = i;
         };
    };
    return indexMin;
};