#include <stdio.h>
#include <stdlib.h>

int porownaj(char *,char *);

int main(void)
{
    char tekst1[]="Hejka";
    char tekst2[]="Hellooooooooooooooo";//"Hello"->zwraca 1
    printf("Porownaj napisy:%i",porownaj(tekst1,tekst2));
    return EXIT_SUCCESS;
}
int porownaj(char *str1,char *str2)
{
    int i=0;
    int j=0;
    while(str1[i]!=0)
    {
        i++;
    }
    while(str2[j]!=0)
    {
         j++;
    }
    if(i==j)
        return 1;
    else
        return 0;
}
