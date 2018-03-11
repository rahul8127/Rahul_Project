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

void NewNodeTail(Node** root, int data){
    Node* new = (Node*)malloc(sizeof(Node*));
    Node* current =NULL;
    
    new->next =NULL;
    new->data = data;
    
    if(*root !=NULL){
        current = *root;
        while(current->next !=NULL){
            current= current->next;
            
        }
        current->next = new;
    }
    else
        *root = new;
        
        
    
    
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

Node* AddListVal(Node** A,Node** B){
    Node* cA = *A;
    Node* cB = *B;
    Node* Result = NULL;
    int s,c,t;
    s=c=t=0;
    
    if(cA == NULL)
        return cB;
    if(cB == NULL)
        return cA;
    while(1){
        if(cA!=NULL&&cB!=NULL){
            s =cA->data+cB->data+c;
            cA= cA->next;
            cB = cB->next;
            
        }
        else if(cB != NULL){
            s=cB->data+c;
            cB=cB->next;
        }
        else if(cA != NULL){
            s= cA->data+c;
            cA = cA->next;
        }
        else
            break;
        c=s/10;
        t=s%10;
        NewNodeTail(&Result,t);
    }
    return Result;
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


