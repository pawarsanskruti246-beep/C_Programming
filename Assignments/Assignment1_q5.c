// Accept one number from user and print that number of *

#include<stdio.h>
void Accept(int iNO)
{
    int iCnt=0;

    for(iCnt=0; iCnt<iNO; iCnt++)
    {
        printf("*\n");
    }

    
}
int main()
{
    int iValue1=0;
    printf("Enter the number");
    scanf("%d",&iValue1);
    
    Accept(iValue1);

    return 0;



}