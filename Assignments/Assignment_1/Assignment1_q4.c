//Accept one number and check whether it is divisible by 5 or not
#include<stdio.h>
typedef int BOOL;  //typedef creates an alternative name for a data type.
#define TRUE 1     //Preprocessor: Replaces TRUE with 1
#define FALSE -1   //Preprocessor: Replaces TRUE with -1

int Check( int iNo)
{
    if((iNo%5)==0)
    {
        return TRUE;
        
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue= 0;
    BOOL bRet= FALSE;

    printf("Enter number :");
    scanf("%d",& iValue);

    bRet= Check(iValue);
    
    if(bRet==TRUE)
    {
        printf("Divide by 5");
    }
    else
    {
        printf("Not divide by 5");
    }

    return 0;


}