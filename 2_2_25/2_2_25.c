#include <stdio.h>

unsigned oblicz(unsigned n);
int main()
{
unsigned n = 5;
unsigned result = oblicz(n);
printf("Wynik: %u\n",result);
return 0;
}
unsigned oblicz(unsigned n)
{
    return (n == 0 || n == 1) ?
        1 :
    ((n % 2 == 0) ? oblicz(n-1) + n :oblicz(n-1) * n);
}
