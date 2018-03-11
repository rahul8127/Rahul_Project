#include<stdio.h>
#include<stdlib.h>

#define bool int


typedef struct Node{
	int Data;
	struct Node* Left;
	struct Node* Right;
	
} Node;



typedef struct Stack{
    Node *t;
    struct Stack *next;
	
} Stack;


bool isEmpty(Stack *top)
{
   return (top == NULL)? 1 : 0;
}  
 
/* Function to pop an item from stack*/
Node *pop(Stack** top_ref)
{
  Node *res;
  Stack *top;
 
  /*If sNode is empty then error */
  if(isEmpty(*top_ref))
  {
     printf("Stack Underflow \n");
     getchar();
     exit(0);
  }
  else
  {
     top = *top_ref;
     res = top->t;
     *top_ref = top->next;
     free(top);
     return res;
  }
}

void push(Stack** top_ref, Node *t)
{
  /* allocate tNode */
  Stack* new_tNode =
            (Stack*) malloc(sizeof(Stack));
 
  if(new_tNode == NULL)
  {
     printf("Stack Overflow \n");
     getchar();
     exit(0);
  }            
 
  /* put in the data  */
  new_tNode->t  = t;
 
  /* link the old list off the new tNode */
  new_tNode->next = (*top_ref);   
 
  /* move the head to point to the new tNode */
  (*top_ref)    = new_tNode;
}



void InOrderTraversal(Node* root){

	Node* current = root;	
	Node* Temp = root;
	Stack* stk = NULL;

	if (root == NULL)
		return;
		
	while(current->Left != NULL && isEmpty(stk)== 0){

		if (current !=NULL){
			push(stk,current);
			current = current->Left;
		}
		else{
			Temp = pop(stk);
			printf("%d",Temp->Data);
			current = Temp->Right;
		}	
	}
	
	

}

Node* newNode(int data){
	
	Node* newnode = (Node*)malloc(sizeof(Node));
	newnode->Data = data;
	newnode-> Left = NULL;
	newnode -> Right = NULL;

	return newnode;
}
void main(){

	Node* root = newNode(1);
	root->Left = newNode(2);
	root->Right = newNode(3);
	root->Left->Left = newNode(4);
	root->Left->Right = newNode(5);
	

	InOrderTraversal(root);	

}
