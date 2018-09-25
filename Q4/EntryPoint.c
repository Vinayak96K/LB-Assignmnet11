#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    float *fPtr=NULL;
    int iLenght=0,iCnt;

    printf("Enter size of array:");
    scanf("%d",&iLenght);

    if(iLenght<=0)
    {
        printf("Positive integer was expected.\n");
        return -1;
    }

    fPtr=(float *) calloc(iLenght,sizeof(float));
    if(fPtr==NULL)
    {
        printf("Unable to allocate memory.\n");
    }
    printf("Enter %d elements:",iLenght);
    for(iCnt=0;iCnt<iLenght;iCnt++)
    {
        scanf("%f",&fPtr[iCnt]);
    }

    Percentage(fPtr,iLenght);


    return 0;
}