#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void funkcja1(unsigned int n,int *tab)
{
    int i,var;
    for(i=0;i<n/2;i++)
    {
        var=tab[i];
        tab[i]=tab[n-1-i];
        tab[n-1-i]=var;
    }
}
void funkcja2(unsigned int n,int *tab)
{
    int i,var=tab[0];
    for(i=0;i<n-1;i++)
    tab[i]=tab[i+1];
    tab[n-1]=var;
}
void funkcja3(unsigned int n,int * tab)
{
    int i,var=tab[n-1];
    for(i=n-2;i>=0;i++)
        tab[i+1]=tab[i];
    tab[0]=var;
}
int max(unsigned int n,int * tab)
{
    int i,maks=0;
    for(i=1;i<n;i++)
        if(tab[i]>tab[maks])
        maks=i;
    return maks;
}
void sort(unsigned int n,int * tab)
{
    int i,j,var;
    for(i=0;i<n-1;i++)
    {
        j=max(n-i,tab);
        var=tab[n-i-1];
        tab[n-i-1]=tab[j];
        tab[j]=var;
    }
}
int minimum(unsigned int n,int *tab)
{
    int i,min=0;
    for(i=1;i<n;i++)
        if(tab[i]<tab[min])
        min=i+1;
    return min;
}
int main()
{
  unsigned int n=5;
  int i;
  int tab[n];
  srand(time(NULL));
  for( i=0;i<n;i++)
  {
      tab[i]=rand()%15+1;
  }
  funkcja1(n,tab);
  funkcja2(n,tab);
  funkcja3(n,tab);
  max(n,tab);
  sort(n,tab);
  minimum(n,tab);
  sort(n,tab);
  printf("%4i",tab[i]);
    getchar();
    return 0;
}



