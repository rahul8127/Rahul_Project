
#include <stdio.h>
#include <stdlib.h>
#include "StringUtils.h"




int main()
{
    int arr[10]= {12, 11, 13, 5, 6, 7};
    int Arr_size2;





    int arr_size = sizeof(arr)/sizeof(arr[0]);
    printf(" \n \n Value : %d \n",arr_size);
    printf("\n \n Seg Test");

    //int TestArray[8] ={5, 8, 9, 4, 1, 6, 9, 6};

    //printArray(TestArray);
    //Arr_size = sizeof(TestArray)/sizeof(TestArray[0]);
    Arr_size2 =8;

    printf("%d",Arr_size2);
    mergeSort(arr,0,Arr_size2-1);

    printArray(arr);

    printf("Hello World\n");



    return 0;
}
