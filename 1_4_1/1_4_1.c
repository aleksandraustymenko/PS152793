#include <stdio.h>

int main()
{
    int n,m;
    printf("Podaj liczbe n:\n");
    scanf("%i",&n);
    printf("Podaj liczbe m:\n");
    scanf("%i",&m);
    for(int i=n;i<m;i+=n)
         printf("%i\n",i);
    return 0;
}
