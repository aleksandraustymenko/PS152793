#include <stdio.h>
#include <stdlib.h>

void wyczysc(char *);

int main(void)
{
    char napis[]="Witaj swiecie";
    wyczysc(napis);
    printf("%s",napis);
    puts(napis);
    return EXIT_SUCCESS;
}
void wyczysc(char *str)
{
    str[0]=0;//str[0]='\0';
}
