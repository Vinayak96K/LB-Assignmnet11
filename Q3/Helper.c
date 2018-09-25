#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: ArrayCapital
//  Description: Accepts base address and size of an array and returns count of capital characters.
//  Input: char[IN-OUT],int[IN]
//  Output: int
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////

int ArrayCapital(char *cArr,int iSize)
{
    int iCnt1=0,iCnt2=0;
    if((cArr==NULL)||(iSize<=0))
    {
        return -1;
    }

    for(iCnt1=0;iCnt1<=iSize;iCnt1++)
    {
        if(cArr[iCnt1]>='A'&&cArr[iCnt1]<='Z')
        {
            printf("%c\n",cArr[iCnt1]);
            iCnt2++;
        }
    }
    return iCnt2;
}