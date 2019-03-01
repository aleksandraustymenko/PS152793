#include <stdio.h>

int main()
{
    int n,i,parzysta;
    printf("Podaj liczbe n:\n");
    scanf("%i",&n);
    if(n<2)
    {
        printf("Mala liczba\n");
    }
        else
        {
            for(i=2;i<=n;i+=2)
            {
                parzysta=(i%2==0);
                if(parzysta)
                {
                    printf("%i",i);
                }
            }
        }
    return 0;
}
