#include <stdio.h>
int funkcja(char* var1,char* var2)
{
    char ch,ch2;
    int isSame = 1;
    FILE* pfile1 = fopen(var1,"r");
    FILE* pfile2 = fopen(var2,"r");
    while(!feof(pfile1) && !feof(pfile2))
    {
        ch = getc(pfile1);
        ch2 = getc(pfile2);
        if(ch != ch2)
        {
            isSame = 0;
            break;
        }
    }
    return isSame;
}
int main()
{
    printf("%i",funkcja("plik1.txt","plik.txt"));
    return 0;
}
