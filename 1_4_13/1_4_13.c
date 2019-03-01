#include <stdio.h>

int main()
{
    int n,sum=1,silnia=1;
    printf("Podaj liczbe n:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        silnia*=i;
        sum+=silnia;
    }
    printf("Wynik dzialania %d",sum);
    return 0;
}
