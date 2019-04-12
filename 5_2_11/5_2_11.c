#include <stdio.h>
#include <stdlib.h>

void wytnijzw (char *,char *);

int main()
{
    char napis1[]="Ala ma kota";
    char napis2[]="Ona ma psa";
    wytnijzw(napis1,napis2);
    printf("%s %s",napis1,napis2);
    return EXIT_SUCCESS;
}
void wytnijzw (char *str1,char *str2)
{
    int i,j;
    int wyst[256]={};
    for(i=0;str2[i]!=0;i++)
        wyst[str1[i]]=1;
    for(i=0,j=0;str1[i]!=0;i++)
        if(wyst[str1[i]]==0)
    {
        if(j<i)
            str1[j]=str1[i];
        j++;
    }
    str1[j]=0;
}
