#include <stdio.h>
#include <stdlib.h>

void wypisz(char *str)
{
    printf("%s\n",str);
}
int main()
{
    char napis[]="Ala ma kota";
    wypisz(napis);
    printf("%s",napis);
    return EXIT_SUCCESS;
}
