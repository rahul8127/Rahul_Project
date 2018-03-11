/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
#include<string.h>

void printString(char str[]){
    printf("String is : \t");
    for(int i =0; str[i] != '\0';i++){
        printf("%c \t",str[i]);
    }
    printf("\n");
}

void makePattern (char pat[], int arr[])
{
  int len = strlen (pat);
  int i, j, k, matched;

  matched = 0;
  arr[0] = 0;
  k = 1;
  while (1){
    printf("Val of i = %d \n",i);
    printf("Val of k = %d \n",k);
    printString(pat);
    
    if (pat[k] == '\0')
      break;
    
    if (pat[i] == pat[k])
	{
	  arr[k] = i + 1;
	  i ++;
	  k ++;
	  matched = 1;
	}
    else
	{
	  if (matched == 1)
	    {
	      i = arr[i - 1];
	      matched = 0;
	      
	    }
	  else
	    {
	      arr[k] = 0;
	      k ++;
	    }

	}
    }

}

int
main ()
{
  char text[500] = "HelloWorld";

  char pat[10] = "abcdabca";
  int patArr[10];
  int i;
  for (i = 0; i < 10; i++)
    {
      patArr[i] = 0;
    }
    
  for(i =0; i<10;i++){
        printf("%d \t",patArr[i]);
    }

  printf("\n");
  makePattern (pat, patArr);

  for (i = 0; i < 10; i++)
    {
      printf ("%d \t", patArr[i]);
    }

  for (int i = 0; text[i] != '\0'; i++)
    {
      printf ("%c \n", text[i]);
    }

  printf ("Hello World");

  return 0;
}
