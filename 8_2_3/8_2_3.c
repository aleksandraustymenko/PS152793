#include <stdio.h>
#include <wctype.h>
#include <ctype.h>

void funkcja(char* plik)
{
    FILE * fl=fopen(plik,"r");
    char ch;
    while(fscanf(fl,"%c",&ch)==1)
        if(!isspace(ch))
            printf("%c",ch);
    fclose(fl);
}
void funkcja1(char * file)
{
    FILE * var=fopen(file,"r");
    wchar_t wch;
    while(fscanf(var,"%c",&wch)==1)
        if(!isspace(wch))
            printf("%c",wch);
    fclose(var);
}
int main()
{
    funkcja("zadanie.txt");
    printf("\n");
    funkcja1("zadanie1.txt");
    return 0;
}
