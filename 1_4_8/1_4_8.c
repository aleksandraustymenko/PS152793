#include <stdio.h>

int main()
{
    int n,i,fibon1=1,fibon2=1,pom;
    printf("Podaj liczbe n: \n");
    scanf("%i",&n);
    for(i=2;i<n;i++)
    {
        pom=fibon1;
        fibon1=fibon2+fibon1;
        fibon2=pom;
    }
    printf("Element ciagu o indeksie %i to %i \n",n,fibon1);
    return 0;
}
