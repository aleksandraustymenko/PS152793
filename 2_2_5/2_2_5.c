#include <stdio.h>

int potega(int);
int main()
 {
    int n;
    printf("Podaj liczbe n: \n");
    scanf("%i",&n);
    printf("2^%i=%i\n",n,potega(n));
    return 0;
 }
int potega(int n)
 {
    int i,liczba=2;
    for(i=1;i<n;i++)
    {
        liczba*=2;
    }
    return liczba;
 }
