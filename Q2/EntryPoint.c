#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    int *iPtr=NULL;
    int iLenght=0,iCnt;

    printf("Enter size of array:");
    scanf("%d",&iLenght);

    if(iLenght<=0)
    {
        printf("Positive integer was expected.\n");
        return -1;
    }

    iPtr=(int *) calloc(iLenght,sizeof(int));
    if(iPtr==NULL)
    {
        printf("Unable to allocate memory.\n");
    }
    printf("Enter %d elements:",iLenght);
    for(iCnt=0;iCnt<iLenght;iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    SumArray(iPtr,iLenght);

    printf("Array elements after replacement:\n");
    for(iCnt=0;iCnt<iLenght;iCnt++)
    {
        printf("%d\n",iPtr[iCnt]);
    }

    free(iPtr);
    return 0;
}
