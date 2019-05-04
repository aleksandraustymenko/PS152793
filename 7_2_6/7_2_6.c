#include <stdio.h>
#include <stdlib.h>

struct punktn
{
    double *tab;
    int wym;
};
void funkcja(struct punktn tab1[],struct punktn tab2[],int n)
{
   for(int i=0;i<n;i++)
   {
       tab2[i].tab=malloc(tab1[i].wym*sizeof(double));
       for(int j=0;j<tab2[i].wym;j++)
       {
           tab2[i].tab[j]=tab1[i].tab[j];
       }
   }
}
int main()
{
    struct punktn tab1[2]={{.wym=3},{.wym=3}},tab2[2]={{.wym=3},{.wym=3}};
    tab1[0].tab=malloc(3*sizeof(double));
    tab1[1].tab=malloc(3*sizeof(double));
    tab1[0].tab[0]=2.4;
    tab1[0].tab[1]=12.4;
    tab1[0].tab[2]=23.4;
    tab1[1].tab[0]=1.64;
    tab1[1].tab[1]=3.4;
    tab1[1].tab[2]=2.4;
   funkcja(tab1,tab2,2);
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<tab2[i].wym;j++)
        {
            printf("%.2lf\n",tab2[i].tab[j]);
        }

    }
    return 0;
}

