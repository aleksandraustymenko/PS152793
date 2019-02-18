#include <stdio.h>

int main()
{
    int liczba;
    printf("Podaj liczbe calkowite: ",liczba);
    scanf("%i",&liczba);
    if(liczba<0)
    liczba*=(-1);
        printf("%i",liczba);
    return 0;
}
