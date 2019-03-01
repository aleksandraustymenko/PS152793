#include <stdio.h>

int main()
{
    int m,n,NWD=1,max;
    printf("Podaj liczbe n\n");
    scanf("%d",&n);
    printf("Podaj liczbe m\n");
    scanf("%d",&m);
    max=(n>m)?n:m;
    for(int i=2;i<=max;i++)
        if((n%i==0)&&(m%i==0))
        NWD=i;
    printf("NWD liczby %d i %d wynosi %d",n,m,NWD);

}
