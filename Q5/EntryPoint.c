#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    char *cPtr=NULL;
    int iLenght=0,iCnt=0,iRet=0;
    
    printf("Enter a positive integer number as size of array:");
    scanf("%d",&iLenght);
    if(iLenght<=0)
    {
        printf("Positive integer number was expected!\n");
        return -1;
    }

    cPtr=(char *)calloc(iLenght,sizeof(char));
    if(cPtr==NULL)
    {
        printf("Unable to allocate memory!\n");
        return -1;
    }

    printf("Enter %d characters:\n",iLenght);
    for(iCnt=0;iCnt<iLenght;iCnt++)
    {
        scanf("%c",&cPtr[iCnt]);
    }

    ArrayReplace(cPtr,iLenght);
    printf("Array Elements after conversion\n");
    for(iCnt=0;iCnt<=iLenght;iCnt++)
    {
        printf("%c\n",cPtr[iCnt]);
    }


    free(cPtr);
    return 0;
}