#include <stdio.h>

void funkcja(FILE* plik,FILE* plik1)
{
    char ch;
    while(fscanf(plik,"%c",&ch) == 1)
    {
        fprintf(plik1,"%c",&ch);
    }
}
int main()
{
    funkcja(fopen("var1.txt","r"),fopen("var.txt","a+"));
    return 0;
}
