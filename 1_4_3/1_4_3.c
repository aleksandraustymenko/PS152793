#include <stdio.h>

int main()
{
    int n,m,k;
    scanf("%i",&n);
    scanf("%i",&m);
    scanf("%i",&k);
    for(int i=n;i<k;i+=n)
         printf("%i\n",i);
    return 0;
}
