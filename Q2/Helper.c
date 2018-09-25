#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: SumArray
//  Description: Accepts base address and size of an array and replace each element by its sum.
//  Input: int[IN-OUT,IN]
//  Output: NA
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////////

void SumArray(int *iArr,int iSize)
{
    int iCnt1=0;
    int iDigit=0,iVar=0,iSum=0;

    if((iArr==NULL)||(iSize<=0))
    {
        printf("Incorrect Input!\n");
    }

    for(iCnt1=0;iCnt1<iSize;iCnt1++)
    {
        iSum=0;
        iVar=iArr[iCnt1];
        while(iVar!=0)
        {
            iDigit=iVar%10;
            iSum=iSum+iDigit;
            iVar=iVar/10;
        }
        iArr[iCnt1]=iSum;
    }
}