#include <stdio.h>

int bezw(int liczba)
{
    if(liczba<0)
        return liczba*(-1);
    else
        return liczba;
}

int main()
{
    int n;
    printf("Podaj liczba n: \n");
    scanf("%i",&n);
    printf("Wartosc bezwzgledna %i=%i",n,bezw(n));
    return 0;
}
