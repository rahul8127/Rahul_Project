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

void Rotate(int N,int M,int arr[N][M]){
    int t1,t2,i,j,k,n;
    if (N!=M)
    return;
    n= N-1;
    for(i= 0;i<N/2;i++){
        k=N-i-1;
        
        for(j=i;j<N-i-1;j++){
            t1=0;
            t2 =0;
            t1 = arr[i][j];
            arr[i][j] = arr[k][i];
            printf("arr[%d][%d]: %d \n",i,j,arr[i][j]);
            
            t2 = arr[j][n];
            arr[j][n] = t1;
            printf("arr[%d][%d]: %d \n",j,n,arr[j][n]);
            
            t1 = arr[n][k];
            arr[n][k] = t2;
           printf("arr[%d][%d]: %d \n",n,k,arr[n][k]);
            
            arr[k][i] = t1;
           printf("arr[%d][%d]: %d \n",k,i,arr[k][i]);
            
            printf("\n");
            k--;
        }
        n--;
        
        printf("**********************************\n");
        print2DArray(6,6,arr);
        printf("**********************************\n");
    }
    
}

int main() {
	//code
	int arr[6][6];
	int k = 1;
	for(int i = 0;i<6;i++){
	    for(int j =0;j<6;j++){
	        arr[i][j]= k;
	        k++;
	        
	    }
	    
	}
	print2DArray(6,6,arr);
	Rotate(6,6,arr);
	printf("Rotate\n");
	print2DArray(6,6,arr);
	return 0;
}

