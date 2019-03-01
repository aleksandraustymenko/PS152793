#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,x=0;
    printf("Podaj liczbe a:\n");
    scanf("%i",&a);
    printf("Podaj liczbe b:\n");
    scanf("%i",&b);
    printf("Podaj liczbe c:\n");
    scanf("%i",&c);
    printf("Podaj liczbe d:\n");
    scanf("%i",&d);
    while(abs(a)*pow(x,2)*b*x+c<d)
    {
        x++;
    }
    printf("Mniejsze x to %d\n",x);
    return 0;
}
