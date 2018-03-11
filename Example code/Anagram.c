#include<stdio.h>
#include<string.h>

char lower(char Ch){
    int a = (int)Ch;
    return(a >= 'A' && a<='Z')?(char)(a+32): (char)a;
}

int isAna(char s1[], char s2[]){
    int len1,len2,TVal1,TVal2;
    len1 = strlen(s1);
    len2 = strlen(s2);
    TVal1 = 0;
    TVal2 = 0;
    
    if (len1!=len2)
        return 0;
    for(int i = 0;i<len1;i++){
        
        TVal1 = TVal1+ (int)lower(s1[i]);
        TVal2 = TVal2+ (int)lower(s2[i]);
        printf("S1: %c \t ASCII: %d \n",(int)s1[i],s1[i] );
        printf("S2: %c \t ASCII: %d \n",(int)s2[i],s2[i] );
    }
    printf("T1: %d \t T2: %d \n",TVal1,TVal2);
    
    if (TVal2==TVal1)
        return 1;
    else
        return 0;
}

int main ()
{
    int ret = 0;
    char S1[10] = "Gainly";
    char S2[10] = "Laying";
    
    ret = isAna(S1,S2);
    if (ret == 1)
        printf("It is an Anagram");
    else
        printf("It is NOT");
    return 0;
}
