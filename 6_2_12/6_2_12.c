#include <stdio.h>
#include <stdlib.h>

int function(int *tab,int n,int m)
{
    int i,j;
    int sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            sum+=*(tab+i*m+j);
        }
    }
    return sum;
}
int main(void)
{
    int tab[2][6]={{4,5,6,7,3,9},{3,6,5,4,6,3}};
    printf("%i",function(tab[0],2,6));
    return EXIT_SUCCESS;
}
