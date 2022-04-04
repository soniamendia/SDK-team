#include <stdio.h>
#include "max.h"
#include "min.h"
#include "odd.h"

int main(){
    int array[] = {5, 17, 9, 12};
    printf("The original array is {%d, %d, %d, %d}\n",array[0],array[1],array[2],array[3]);
    printf("The max value is in index %d\n",max(array,4));
    printf("The min value is in index %d\n",min(array,4));
    printf("The odd values are in index {");
    odd(array,4);
    printf("}\n");
    return 0;
}