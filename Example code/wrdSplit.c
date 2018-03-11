/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>



int* CreateWordVal(int arr[]){

    int length = 0;
    int count = 0;
    int j = 0;
    int i;
    int *ValArr = (int*)malloc(sizeof(int)*100);
    for(i = 0; i<100;i++){
        ValArr[i] = NULL;
    }

    printf("Line1\n");
    length = strlen(arr);
    printf("Length of string is: %d\n",length);


    for(i =0 ; i<length;i++){
        printf("Loop:%d   : %c\n",i,arr[i]);
        if(arr[i] == ' '){
            ValArr[j] = count;
            printf("%d \n",count);
            count = 0;
            j++;
        }
        else{
            count++;
        }
    }
    j++;
    ValArr[j] = 0;
    printf("End of Line\n");
    return ValArr;

}

int main()
{
    char data[500];
    int *wordVal;
    int i =0;
    int value = 0;

    printf("Enter the line:\n");
    //gets(data);
    scanf("%s",data);

    value = strlen(data);
    printf("string length is : %d\n",value);





    wordVal = CreateWordVal(data);

    while(1){
        if(wordVal[i]==0){
            break;
        }
        printf("%d\t",wordVal[i]);
        i++;
    }


    printf("Hello World\n");
    printf("%s",data);

    return 0;
}


