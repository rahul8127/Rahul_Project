/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void print2DArray(int N,int M,int arr[N][M]){
    printf("Array is:\n");
    for(int i = 0;i<N;i++){
	    for(int j =0;j<M;j++){
	        printf("%d \t",arr[i][j]);
	    }
	    printf("\n");
    }
	        
}

void searchAndZero(int M,int N, int arr[M][N]){
    int R[M];
    int C[N];
    int i,j;
    for(i = 0; i<M;i++)
    {
        R[i] = 1;
    }
    for(i = 0; i<N;i++)
    {
        C[i] = 1;
    }
    
    for(i= 0;i<M;i++){
        for(j=0;j<N;j++){
            if(arr[i][j]==0)
            {
                R[i]= 0;
                C[j]=0;
            }
        }
    }
    
    for(i= 0;i<M;i++){
        for(j=0;j<N;j++){
            if(R[i]==0 ||C[j]==0){
                arr[i][j] = 0;
            }
            
        }
    }
    
}

int main() {
	//code
	int M= 4;
	int N=5;
	int arr[M][N];
	int k = 1;
	for(int i = 0;i<M;i++){
	    for(int j =0;j<N;j++){
	        arr[i][j]= k;
	        k++;
	        
	    }
	    
	}
	arr[1][2] = 0;
	arr[2][1] = 0;
	print2DArray(M,N,arr);
    searchAndZero(M,N,arr);
	printf("Rotate\n");
	print2DArray(M,N,arr);
	return 0;
}

