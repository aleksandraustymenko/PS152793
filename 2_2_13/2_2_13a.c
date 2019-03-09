#include <stdio.h>
#include <math.h>

int pierw(unsigned int x)
{
    int p=0,k=x,sred;
    while(k-p>1)
    {
        sred=(p+k)/2;
        if(sred*sred<=x)
            p=sred;
        else
            k=sred;
    }
    if(x<=1)
        return k;
    else
        return p;
}
void wypisz(unsigned int n)
{
    int i,s;
    for(i=1;i<=pierw(n);i++)
    {
        s=pierw(n-i*i);
        if((s!=0)&&(i*i+s*s==n))
            printf("%i*%i+%i*%i=%i\n",i,i,s,s,n);
    }
}
int main()
{
    unsigned n;
    scanf("%i",&n);
    printf("Test\n");
    wypisz(n);
    return 0;
}
