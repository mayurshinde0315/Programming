#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cValue)
{
    if((cValue>='A'&& cValue<='Z'))
    {
        return TRUE;
    }
    else if(cValue>='a'&& cValue<='z')
    {
        return FALSE;
    }
}
int main()
{
    int cValue=0;
    BOOL bRet = FALSE;

    printf ("Enter number");
    scanf ("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is Not Vowel");
    }

    return 0;
}