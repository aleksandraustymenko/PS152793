#include <stdio.h>

int main()
{
    int a,b;
    printf("Podaj liczbe calkowite a: ",a);
    scanf("%i",&a);
    printf("Podaj liczbe calkowite b: ",b);
    scanf("%i",&b);
    if(a>b)
        printf("%i",a);
        else
            printf("%i",b);
    return 0;
}
