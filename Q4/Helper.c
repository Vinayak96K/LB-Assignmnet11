#include"MyHeader.h"

//////////////////////////////////////////////////////////////////////////////////////
//  Function Name: Percentage
//  Description: Accept marks of N students from user and display class of each student.
//  Input: float[IN-OUT],int[IN]
//  Output: NA
//  Author: Vinayak Mahendra Patil
/////////////////////////////////////////////////////////////////////////////////////

void Percentage(float *fArr,int iSize)
{
    int iCnt1=0;
    if((fArr==NULL)||(iSize<=0))
    {
        printf("Incorrect Input!");
        return;
    }

    for(iCnt1=0;iCnt1<iSize;iCnt1++)
    {
        if(fArr[iCnt1]>=70 && fArr[iCnt1]<=100)
        {
            printf("%f\tFirst Class with distinction.\n",fArr[iCnt1]);
        }
        else if((fArr[iCnt1]>=60)&&(fArr[iCnt1]<70))
        {
            printf("%f\tFirst Class.\n",fArr[iCnt1]);
        }
        else if((fArr[iCnt1]>=50)&&(fArr[iCnt1]<60))
        {
            printf("%f\tSecond Class.\n",fArr[iCnt1]);
        }
        else if((fArr[iCnt1]>=35)&&(fArr[iCnt1]<50))
        {
            printf("%f\tPass Class.\n",fArr[iCnt1]);
        }
        else if(fArr[iCnt1]<35)
        {
            printf("%f\tFail.\n",fArr[iCnt1]);
        }
        else
        {
            printf("%f\tIncorrect percentage.\n",fArr[iCnt1]);
        }
    }
}