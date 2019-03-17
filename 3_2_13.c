#include <stdio.h>
#include <stdlib.h>

double f(double (* funkcja)(int funkcja2),int n)
{
    return funkcja(n);
}
int main(void)
{
   double x;//nie rozumiem co trzeba robic w zadanie 13
   int y;
   f(* funkcja,5);
   getchar();
   return 0;
}
