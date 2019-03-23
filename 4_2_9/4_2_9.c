#include <stdio.h>
#include <stdlib.h>

/*void sortuj(unsigned int n,int* tab1,int* tab2,int* tab3)
{
    for(int i=0;i<n;i++)
    {
        int T[]={tab1[i],tab2[i],tab3[i]};
        qsort(T,T+3);//???trzeba napisac cos inne zeby zadzialo
        tab3[i]=T[0];
        tab2[i]=T[1];
        tab1[i]=T[2];
    }
}
int main(void)
{
    int n;
    scanf("%d",&n);
    int *tab1=malloc(n * sizeof(int));
    int *tab2=malloc(n * sizeof(int));
    int *tab3=malloc(n * sizeof(int));
    for(int i=0;i<n;++i)
        scanf("%d",&tab1[i]);
    for(int i=0;i<n;++i)
        scanf("%d",&tab2[i]);
    for(int i=0;i<n;++i)
        scanf("%d",&tab3[i]);
    sortuj(n,tab1,tab2,tab3);
    for(int i=0;i<n;++i)
        printf("Tablica 1:%d",tab1[i]);
    for(int i=0;i<n;++i)
        printf("Tablica 1:%d",tab2[i]);
    for(int i=0;i<n;++i)
        printf("Tablica 1:%d",tab3[i]);
        return EXIT_SUCCESS;
}*/

void funkcja(unsigned int n,int * tab1,int * tab2,int * tab3)
{
    for(unsigned int i=0;i<n;++i)
    {
        tab1[i]=i;
        tab2[i]=i+2;
        tab3[i]=i+3;
    }
}

void max(unsigned int n,int * tab1,int * tab2,int * tab3)
{
    for(unsigned int i=0;i<n;++i)
    {
        tab1[i]=tab1[i]>tab2[i]?(tab1[i]>tab3[i]?tab1[i]:tab3[i]):(tab2[i]>tab3[i] ? tab2[i]:tab3[i]);
    }
}
void max2(unsigned int n,int * tab1,int *tab2,int * tab3)
{
    for(unsigned int i=0;i<n;i++)
    {
        tab2[i]=tab2[i]>tab1[i] ? (tab1[i]>tab3[i]?tab1[i]:tab3[i]):(tab2[i]>tab3[i]?tab2[i]:tab3[i]);
    }
}
void min(unsigned int n,int * tab1,int * tab2,int* tab3)
{
    for(unsigned int i=0;i<n;i++)
    {
        tab3[i]=tab3[i]>tab1[i]?(tab1[i]>tab2[i]? tab2[i]:tab1[i]):(tab3[i]>tab2[i]?tab2[i]:tab3[i]);
    }
}
int main(void)
{
    int n=5;
    int tab1[n],tab2[n],tab3[n];
    funkcja(n,tab1,tab2,tab3);
    for(int i=0;i<n;i++)
    {
        printf("%5u\t%3i\t%3i\t%3i\n",i,tab1[i],tab2[i],tab3[i]);
    }
    getchar();
    return EXIT_SUCCESS;
}
