#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: ArrayCOuntVowel
//  Description: Accepts base address and size of an array and returns count of vowel characters.
//  Input: char[IN-OUT],int[IN]
//  Output: int[OUT]
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////

int ArrayCountVowel(char *cArr,int iSize)
{
    int iCnt1=0,iCnt2=0;
    if((cArr==NULL)||(iSize<=0))
    {
        return -1;
    }

    for(iCnt1=0;iCnt1<=iSize;iCnt1++)
    {
        if(cArr[iCnt1]=='A'|| cArr[iCnt1]=='E'|| cArr[iCnt1]=='I'|| cArr[iCnt1]=='O'|| cArr[iCnt1]=='U'||cArr[iCnt1]=='a'|| cArr[iCnt1]=='e'|| cArr[iCnt1]=='i'|| cArr[iCnt1]=='o'|| cArr[iCnt1]=='u')
        {
 //           printf("%c\n",cArr[iCnt1]);
            iCnt2++;
        }
    }
    return iCnt2;
}