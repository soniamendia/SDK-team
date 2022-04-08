#include <stdio.h>
#include "find.h"
#include "printtArray.h"
#include "sort.h"

int main(){
    int array[] = {6, 5, 2, 25, 3, 1};
    int data = 25;
    int index = find(array,6,data);
    printf("The original array is ");
    printArray(array,6);
    printf("The sorted array is {");
    sortArray(array,6);
    printf("}\n");
    printf("The index of the value %d is '%d' in the original array and '%d' in the sorted array\n",data,index,find(array,6,data));
    return 0;
}