#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: DiffCase
//  Description: Accepts base address and size of an array and returns difference between capital and small characters.
//  Input: char[IN-OUT],int[IN]
//  Output: int
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int DiffCase(char *cArr,int iSize)
{
    int iCnt1=0,iCnt2=0,iCnt3=0,iDiff=0;
    if((cArr==NULL)||(iSize<=0))
    {
        return -1;
    }

    for(iCnt1=0;iCnt1<=iSize;iCnt1++)
    {
        if(cArr[iCnt1]>='A'&&cArr[iCnt1]<='Z')
        {
            
            iCnt2++;
        }
        else if(cArr[iCnt1]>='a'&&cArr[iCnt1]<='z')
        {
            iCnt3++;
        }
    }

    iDiff=iCnt2-iCnt3;
    return iDiff;
}