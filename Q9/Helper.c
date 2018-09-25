#include"MyHeader.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: Pattern
//  Description: Accepts base address and size of an array, checks each element and prints that number of * on screen if the element is even.
//  Input: int[IN-OUT,IN]
//  Output: NA
//  Author: Vinayak Mahendra Patil
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int *iArr,int iSize)
{
    int iCnt1=0,iCnt2=0;
    if((iArr==NULL)||(iSize<=0))
    {
        printf("Incorrect Input!\n");
        return;
    }

    for(iCnt1=0;iCnt1<iSize;iCnt1++)
    {
        if(iArr[iCnt1]%2==0)
        {
            for(iCnt2=1;iCnt2<=iArr[iCnt1];iCnt2++)
            {
                printf("*\t");
            }
        printf("\n");
        }
        
    }

}