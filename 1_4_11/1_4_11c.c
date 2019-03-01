#include <stdio.h>
#include <math.h>


int main()
{
    int a,b,c,d,x=0;
    printf("Podaj liczbe a:\n");
    scanf("%u",&a);
    printf("Podaj liczbe b:\n");
    scanf("%u",&b);
    printf("Podaj liczbe c:\n");
    scanf("%u",&c);
    printf("Podaj liczbe d:\n");
    scanf("%u",&d);
    while(5*pow(x+1,2)+a*(x+1)+b<=c)
    {
        x++;
    }
    printf("Mniejsze x to %u\n",x);
    return 0;
}
