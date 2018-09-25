#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: Search
//  Description: Accepts base address and size of an array along with a character and returns count of that characters.
//  Input: char[IN-OUT],int[IN]
//  Output: int[OUT]
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////

int Search(char *cArr,int iSize,char cVar)
{
    int iCnt1=0,iCnt2=0;
    if((cArr==NULL)||(iSize<=0))
    {
        return -1;
    }

    for(iCnt1=0;iCnt1<=iSize;iCnt1++)
    {
        if(cVar>='A'&&cVar<='Z')
        {
            if(cVar==cArr[iCnt1]|| (cVar+32)==cArr[iCnt1])
            {
                iCnt2++;
            }
        }
        else if(cVar>='a'&&cVar<='z')
        {
            if(cVar==cArr[iCnt1]|| (cVar-32)==cArr[iCnt1])
            {
                iCnt2++;
            }
        }
    }
    return iCnt2;
}