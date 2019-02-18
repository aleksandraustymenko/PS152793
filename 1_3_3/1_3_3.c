#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Podaj liczbe calkowite a: ",a);
    scanf("%i",&a);
    printf("Podaj liczbe calkowite b: ",b);
    scanf("%i",&b);
    printf("Podaj liczbe calkowite c: ",c);
    scanf("%i",&c);
    int var=a;
    if(b>var)
        var=b;
    if(c>var)
        var=c;
    printf("%i",var);
    return 0;
}
