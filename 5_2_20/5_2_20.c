#include <stdio.h>
#include <stdlib.h>

char * godzina(int ,int ,int);
int main()
{
    char *hour=godzina(23,04,01);
    for(int i=0; i<8; i++)
        printf("%c",hour[i]);
    free(hour);
    return EXIT_SUCCESS;
}
char * godzina(int godz,int min,int sek)
{
    char *result=malloc(9*sizeof(char));
    sprintf(result,"%02d:%02d:%02d",godz,min,sek);
    return result;
}
