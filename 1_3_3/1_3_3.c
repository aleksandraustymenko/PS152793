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
    if(c>a && c>b)
        printf("%i",c);
        if(a>b && a>c)
            printf("%i",a);
             if(b>a && b>c)
        printf("%i",b);
        else
            printf("%i",a,b,c);

    return 0;
}
