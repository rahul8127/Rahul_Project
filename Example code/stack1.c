/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct Stack{
    int data;
    struct Stack* next;
    
}Stack;

Node* createNode(int data){
    Node* sNode = (Node*)malloc(sizeof(Node));
    sNode->data
}
void Push(Node** root,int data){
    Node* new = createNode(data);
    
    
}



int main()
{
   
   Node* A = NULL;
   Node* B = NULL;
   Node* Result = NULL;
   
   
    NewNodeTail(&A,3);
    NewNodeTail(&A,1);
    NewNodeTail(&A,5);
    
    NewNodeTail(&B,5);
    NewNodeTail(&B,9);
    NewNodeTail(&B,2);
    
    // NewNodeTail(&root,3);
    // NewNodeTail(&root,2);
    // NewNodeTail(&root,1);
   
    printf("Hello World");
    PrintList(&A);
    PrintList(&B);
    
    Result = AddListVal(&A,&B);
    //delDup(&root);
    PrintList(&Result);

    return 0;
}


