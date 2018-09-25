#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    char *cPtr=NULL;
    char ch;
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

    printf("Enter %d characters:",iLenght);
    for(iCnt=0;iCnt<=iLenght;iCnt++)
    {
        scanf("%c\n",&cPtr[iCnt]);
    }

   /* for(iCnt=0;iCnt<=iLenght;iCnt++)
    {
        printf("%c\n",cPtr[iCnt]);
    }*/
   // printf("\n");
    printf("\nEnter a character to search:");
    scanf("\n%c",&ch);
    iRet=Search(cPtr,iLenght,ch);

    if(iRet==-1)
    {
        printf("Incorrect Input!\n");
    }
    else
    {
        printf("Total %c characters are %d.\n",ch,iRet);
    }

    free(cPtr);
    return 0;
}