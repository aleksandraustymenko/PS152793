#include <stdio.h>

unsigned f(unsigned n, unsigned m);
int main()
{
unsigned n = 5;
unsigned result = f(n,3);
printf("Wynik: %u\n",result);
return 0;
}
unsigned f(unsigned n, unsigned m)
{
    if(m == 0)
 {
        return n;
 }
   return (n >= m && m > 0) ?
    n - m + f(n-1, m) + f(n, m-1) : f(m,n);
}
