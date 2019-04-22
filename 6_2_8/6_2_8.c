#include <stdio.h>
#include <stdlib.h>

void function(int tab[][100],int m)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<100;j++)
        {
            tab[i][j]=0;
        }
    }
}
int main(void)
{
    int m=4;
    int tab[m][100];
    function(tab,m);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<100;j++)
        {
            printf("%i\n",tab[i][j]);
        }
    }
    return EXIT_SUCCESS;
}
