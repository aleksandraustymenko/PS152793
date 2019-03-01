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
    while(5*pow(x+1,2)+a*(x+1)+b<c)
    {
        x++;
    }
    printf("Mniejsze x to %d\n",x);
    return 0;
}
