#include <stdio.h>
#include <stdlib.h>

int dlugosc(char *);
int main(void)
{
    char napis[]="Napisz funkcje";
    dlugosc(napis);
    printf("Dlugosc:%i\n",dlugosc(napis));
    puts(napis);
    return EXIT_SUCCESS;
}
int dlugosc(char *str)
{
    int i=0;
    while(str[i]!=0)
        i++;
    return i;
}
