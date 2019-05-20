#include <stdio.h>

#define petla(x,n)for(x=n;x>=0;x--)

int main()
{
    int x=5;
    int n=9;
    petla(x,n)
    printf("%d",x);
    return 0;
}
