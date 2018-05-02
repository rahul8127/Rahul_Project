#ifndef STRINGUTILS_H_
#define STRINGUTILS_H_

#include <stdio.h>
#include<stdlib.h>

typedef struct retPattern1{
    int index;
    int windowLength;

}retPattern1;



char* removeDup(char* strArray);
struct retPattern1 FindAllLettersFromStringWindow(char* pat, char* str);
void mergeSort(int arr[],int L,int R);
void printArray(int arr[]);









#endif
