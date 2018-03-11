//Fibonacci Series using Dynamic Programming
#include<stdio.h>
#include<string.h>


char replace(char arr[]){
    int sCount = 0;
    int len = strlen(arr);
    for(int i = 0; i<len;i++){
        if(arr[i]==' ')
        sCount++;
    }
    
    printf("sCount: %d\n",sCount);
    int newSLen = len + 2*sCount;
    char* newChar = (char*)malloc(sizeof(char));
    for(int j = len;j>-1;j--){
        if(arr[j] == ' '){
            printf("NewLen: %d\n",newSLen);
            newChar[newSLen -1] = "0";
            newChar[newSLen -2] = "2";
            newChar[newSLen -3] = "%";
            newSLen -=3 ;
        }
        else{
            newChar[newSLen -1] = arr[j];
            newSLen -=1 ;
        }
    }
    // for(int k = 0; k<){
        
    // }
    return newChar;
    
}

int main ()
{
    char ret,S2[50];
    char S1[20] = "I am Rahul ";
    
    printf("return Value: %s\n",S1);
    
    ret = replace(S1);
    //strcpy(S2,ret);
    //printf("return Value: %s",ret);
    
    return 0;
}
