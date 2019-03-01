#include <stdio.h>

int main()
{
    int n,m;
    scanf("%i",&n);
    scanf("%i",&m);
    if(n<m)
    {
        for(int i=n;i<=m;++i)
        {
            n*=i;
        }
        printf("Wynosi:%i\n",n);
    }
    else
    {
        printf("n nie mniejsze od m\n");
    }
    return 0;
}
