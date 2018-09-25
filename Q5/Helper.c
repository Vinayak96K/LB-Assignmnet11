#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: ArrayReplace
//  Description: Accepts base address and size of an array and converts each capital characters to small.
//  Input: char[IN-OUT],int[IN]
//  Output: int
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////

void ArrayReplace(char *cArr,int iSize)
{
    int iCnt1=0,iCnt2=0;
    if((cArr==NULL)||(iSize<=0))
    {
        printf("Incorrect Input!\n");
        return;
    }

    for(iCnt1=0;iCnt1<=iSize;iCnt1++)
    {
        if(cArr[iCnt1]>='A'&&cArr[iCnt1]<='Z')
        {
            cArr[iCnt1]=(cArr[iCnt1]+32);
        }
    }
    
}