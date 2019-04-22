#include <stdio.h>
#include <stdlib.h>

void function(int * tab1,int * tab2,int n,int m)
{
    int t[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            t[i][j]=*(tab2+i*m+j);
            *(tab2+i*m+j)=*(tab1+i*m+j);
            *(tab1+i*m+j)=t[i][j];
        }
    }
}
int main()
{
    int tab1[2][6]={{5,2,6,5,4,1},{3,5,4,2,5,1}},
    tab2[2][6]={{4,5,2,1,2,4},{2,3,3,1,4,2}};
    function(tab1[0],tab2[0],2,6);
    return EXIT_SUCCESS;
}
