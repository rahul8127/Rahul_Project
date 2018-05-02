#include <stdio.h>
#include <stdlib.h>
#include "StringUtils.h"
#include <string.h>





/*This Funtion will remove any duplicate charecter from a given string and return a clean string*/
char* removeDup(char* strArray){

    if(strArray == NULL){
        return 0;

    }
    int len = strlen(strArray);
    int hashtbl[255] = {0};
    int retStringIndex = 0;
    for(int i = 0; i<len;i++){
        if(hashtbl[(int)strArray[i]] == 0){
            hashtbl[(int)strArray[i]] = 1;
            strArray[retStringIndex] = strArray[i];
            retStringIndex++;

        }
    }
    strArray[retStringIndex] = '\0';
    return strArray;
    printf("\nString Length= %d\n",len);
}



struct retPattern1 FindAllLettersFromStringWindow(char* pat, char* str){
    struct retPattern1 retVal;
    retVal.index = -1;
    retVal.windowLength = -1;

    if(pat ==NULL ||str ==NULL){
        return retVal;

    }
    int lenP = strlen(pat);
    int lenS = strlen(str);
    int count = 0;
    int start = 0;
    int start_index = -1;
    int min_len = 100;



    if(lenP>lenS){
        return retVal;
    }

    int HashPat[256] = {0};
    int HashStr[256] = {0};

    for (int i =0; i<lenP; i++){
        HashPat[pat[i]]++;
    }

    for(int j =0;j<lenS; j++){
        HashStr[str[j]]++;

        if(HashPat[str[j]] !=0 && HashStr[str[j]] <= HashPat[str[j]]){
            count ++;
        }

        if(count == lenP){

                while(HashPat[str[start]] == 0 || HashStr[str[start]] > HashPat[str[start]]){

                    if(HashStr[str[start]] > HashPat[str[start]]){

                        HashStr[str[start]] --;
                    }
                    start ++;
                }

                int len_window = j+1-start;
                if(min_len >len_window){
                    min_len = len_window;
                    start_index = start;
                }
        }
    }

    if(start_index == -1){

        return retVal;
    }

    retVal.index = start_index;
    retVal.windowLength = min_len;

    return retVal;



}





void printArray(int arr[]){
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("\nArray of size %d: \n",size);
    for(int i=0;i<size;i++){
        printf(" %d",arr[i]);

        printf(",");
    }

}

void merge(int arr[],int L,int M,int R){
    int n1 = M-L+1;
    int n2 = R-M;
    int i, j, k;

    int lArr[n1];
    int rArr[n2];
    for(int n = L;n<M;n++){
        lArr[n] = arr[n];
    }
    for(int n = M+1;n<R;n++){
        rArr[n] = arr[n];
    }
    i =0;
    j=0;
    k= L;
    while(i<n1 && j<n2){
        if(lArr[i]>rArr[j]){
            arr[k] = rArr[j];
            j++;
        }
        else{
            arr[k]= lArr[i];
            i++;
        }
        k++;

    }

    while(i<n1){
        arr[k] = lArr[i];
        i++;
        k++;

    }
    while(j<n2){
        arr[k] = lArr[j];
        j++;
        k++;

    }




}

void mergeSort(int arr[],int L,int R){
    if(L>R)
        return;

    int M;
    M = (R-L+1)/2;
    mergeSort(arr,L,M);
    mergeSort(arr,M+1,R);

    merge(arr,L,M,R);

}










