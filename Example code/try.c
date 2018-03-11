/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>




void findOddNumber(int Num){
    static int count = 0;
    if(Num <= 0){
        printf("count= %d\n",count);
        return;
    }
    if(Num%2==1){
        count+=1;;
    }
    printf("Num = %d\n",Num);
    Num-=1;
    //printf("Num = %d\n",Num);
    findOddNumber(Num);

}




void main(){

int n= 10;
int ret = 0;
findOddNumber(n);

//printf("Total Odd Number = %d \n",count);

}


