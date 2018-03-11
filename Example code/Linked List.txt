/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
    
}Node;

void NewNode(Node** root,int Data){
    
      
    Node* New = (Node*)malloc(sizeof(Node));
    //printf("checkpoint*****\n"); 
    if(*root != NULL)
        New->next = *root;
    else
        New->next = NULL;
    
    New->data = Data;
    *root = New;
    
    
    
}

void PrintList(Node** Root){
    if(Root == NULL)
        return;
    Node* current = *Root;
    printf("The Linked list is: \n");
    while(1){
        printf("-> %d ",current->data);
        if(current->next!=NULL){
            current = current->next;
        }
        else
        {
            printf("\n");
            break;
        }
    }
}


int main()
{
   
   Node* root = NULL;
   
   
    NewNode(&root,9);
    NewNode(&root,8);
    NewNode(&root,7);
    NewNode(&root,6);
    NewNode(&root,5);
    NewNode(&root,4);
    NewNode(&root,3);
    NewNode(&root,2);
    NewNode(&root,1);
   
    printf("Hello World");
    PrintList(&root);

    return 0;
}


