/******************************************************************************

Remove duplicate from a string
*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>

char* removeDup(char* strArray){
    
    if(strArray == NULL){
        return;
        
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



int main()
{
   char str[] = "GeeksforGeek";
   
   removeDup(str);
   
    printf("Hello World\n");
    printf("New String is : %s \n",str);

    return 0;
}
