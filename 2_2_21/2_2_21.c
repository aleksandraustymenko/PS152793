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
    return (n == 0) ?
    1 :2 * oblicz(n-1) + 5;
}

