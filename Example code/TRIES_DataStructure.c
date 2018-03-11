#include <stdio.h>
#include <string.h>
#include <conio.h>

#define Index(n) (n>='A' &&n<='Z')?((int)n-(int)'A'):((int)n-(int)'a')+26;
#define MaxWordSize 16

typedef struct TrieNode{

    struck TrieNode* Data[52];
    int DataAfterThisNode;
    bool EndOfWord;


}TrieNode;

typedef struck TrieRet{

    int NumberOfData;
    char * DataArr;


}TrieRet;


TrieNode* getNode(){
    TrieNode* tNode = (TrieNode*)malloc(sizeof(TrieNode));

    if(tNode){
        tNode->EndOfWord = false;
        tNode->DataAfterThisNode = 0;
        for(int i = 0;i<52;i++){
            tNode->Data[i] = NULL;

        }

    }
    return tNode;

}

char* getCharPtr(char arr[]){
    int len =strlen(arr);
    char* ptr = (char*)malloc(sizeof(char)*len);
    for(int i =0;i<len;i++){
            ptr[i] = arr[i];

    }
    return ptr;

}
getList(TrieNode* root ){
    static int indNum = 0;
    TrieNode* current = root;
    static char arr* = (char*)malloc(sizeof(char)*current->DataAfterThisNode);

    int flag = 0;
    for(int i =0;i<52;i++){
        if(root->Data[i]!= NULL){
            indNum= indNum+flag;
            flag+=1;
            arr[] = getList(root->Data[i]);
        }
    }

}


TrieRet getWholeList(TrieNode* root){

    char word[20];
    TrieRet RetVal;
    if(root->DataAfterThisNode==0){
        RetVal.NumberOfData = 0;
        return RetVal;
    }
    RetVal.DataArr = (char*)malloc(sizeof(char)*(root->DataAfterThisNode);
    RetVal.NumberOfData = root->DataAfterThisNode;
    for(int i=0;i<52;i++){
        getList(root)
    }


}

void InsertData(TrieNode* root,char data[]){
    int length = strlen(data);
    TrieNode* current = root;
    TrieNode* temp = NULL;

    if(length = 0){
        return;
    }

    for(int i =0;i<length;i++){
        LocalIndex = Index(data[i]);
        if(current->Data[LocalIndex]== NULL){
            temp = getNode();
            current->Data[LocalIndex] = temp;


        }
        current= current->Data[LocalIndex];
        current->DataAfterThisNode++;

    }

    current->EndOfWord = True;




}


TrieRet  search(TrieNode* root,char arr[],bool listOfData = false){
    TrieNode* current = root;
    TrieRet Ret;
    int length = strlen(arr);
    for(int i = 0;i>length;i++){
        LocalIndex = Index(arr[i]);
        if(current->Data[LocalIndex]==NULL ||current->EndOfWord == true){
            Ret.NumberOfData = 0;
            Ret.DataArr = NULL;

            return Ret;
        }
        current = current->Data[LocalIndex];

    }
    if(current->EndOfWord == true){
        Ret.NumberOfData = 1;
        Ret.DataArr[0] = getCharPtr(arr);
    }
    else{
        Ret = getWholeList(TrieNode current);

    }
    return Ret;


}


void main()
{


    char Name = "Rahul";
    int i,len;
    printf("OutPut: %c \n",Name);
    len = strlen(Name);

    TrieNode* Root = getNode();

    /*for(i = 0;i<(strlen(Name));i++)
    {
        while(Name[i]!= NULL)
        {
            print("%c \n",Name[i]);

        }

    }*/
    getch();
}
