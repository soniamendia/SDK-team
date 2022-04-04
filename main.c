#include <stdio.h>
#include "max.h"
#include "min.h"
#include "odd.h"

int main(){
    int array [] = {5, 17, 9, 12};
    printf("The array is: {%d, %d, %d, %d}\n",array[0],array[1],array[2],array[3]);
    printf("The index of the max value in the array is: %d\n",max(array,4));
    printf("The index of the min value in the array is: %d\n",min(array,4));
    printf("The index of the odd numbers are: {");
    odd(array,4);
    printf("}\n");
    return  0;
}