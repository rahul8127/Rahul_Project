/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

typedef struct Heap{
    int Cap;
    int* Arr;
    int len;
}Heap;

Heap* CreateHeap(int size){
    Heap* New = (Heap*)malloc(sizeof(Heap));
    New->Cap = size;
    New->len = 0;
    
    New->Arr = (int*)malloc(sizeof(int)*size);
    return New;
}

void EnterMultipleDataToHeap(Heap* ArrHeap){
    
    printf("Enter int Data to Heap(Array): \n");
   int i=0;
   //int count = ArrHeap->Cap;
    while(1){
        scanf("%d",&ArrHeap->Arr[i]);
        ArrHeap->Cap-=1;
        printf("Free space in Array: %d\n",ArrHeap->Cap);
        if(ArrHeap->Arr[i]==0 || ArrHeap->Cap<=0){
            ArrHeap->Cap++;
            break;
        }
        ArrHeap->len++;
        i++;
        
    }
    
}

void PrintHeap(Heap* ArrHeap){
    printf("Heap elements are: [ ");
    for (int i=0;i<ArrHeap->len;i++){
        printf(" %d |",ArrHeap->Arr[i]);
    }
    printf("]\n");
}

void CreateHeapTree(Heap* ArrData){
    
    
}

int main()
{
    Heap* ArrData;
    int Arrsize = 0;
    printf("Please Enter the array size: \n");
    scanf("%d",&Arrsize);
    
    
    printf("Array size is: %d\n",Arrsize);
    
    ArrData = CreateHeap(Arrsize);
    
    
    EnterMultipleDataToHeap(ArrData);
    
    PrintHeap(ArrData);
    
    CreateHeapTree(ArrData);
    
    
    printf("Hello World\n");
    return 0;
}


