#include <stdio.h>
#include <stdlib.h>

int maksimum(int* tab,int n,int m)
{
    int i,j,suma,max;
    double var;
    for (int i=0;i<n;i++)
        {
            suma=0;
            for(int j=0;j<m;j++)
                suma+=*(tab+i*m+j);
            if(((double)suma/m>var)||(i==0))
            {
                max=i;
                var=(double)suma/m;
            }
        }
        return max;
}

int main(void)
{
     int tab[2][3]={{3,1,4},{5,2,3}};
    printf("%i",maksimum(tab[0],2,3));
    return EXIT_SUCCESS;
}
