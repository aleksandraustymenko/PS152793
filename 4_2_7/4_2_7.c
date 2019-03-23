#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int suma(int n,int * tab1,int * tab2,int * tab3)
{
    for(int i=0;i<n;i++)
    {
        tab3[i]=tab1[i]+tab2[i];
        printf("%d\n",tab3[i]);
    }
    printf("\n");
}
int wiekszy (int n,int * tab1,int * tab2,int * tab3)
{
    for(int i=0;i<n;i++)
    {
        if(tab3[i]>tab1[i])
        {
            tab3[i]=tab1[i];
            printf("%d\n",tab3[i]);
        }
        else
        {
            tab3[i]=tab2[i];
            printf("%d\n",tab3[i]);
        }
    }
    printf("\n");

}

int przypisz(int n,int * tab1,int * tab2,int * tab3)
{
    for(int i=0;i<n;i++)
    {
        tab3[i]=tab2[i];
       printf("%d",tab1[i]);
    }
    for(int i=0;i<n;i++)
    {
        tab2[i]=tab1[i];
       printf("%d",tab2[i]);
    }
    for(int i=0;i<n;i++)
    {
        tab1[i]=tab3[i];
        printf("%d",tab3[i]);
    }
    printf("\n");
}
int main(void)
{
    int n;
    srand(time(NULL));
    printf("Podaj liczbe elementow tab:  ");
    scanf("%d",&n);

    int tab1[n],tab2[n],tab3[n];
    for(int i=0;i<n;i++)
    {
        tab1[i]=rand()%100+1;
        printf("%d",tab1[i]);
    }
    printf("\n");

   for (int i=0;i<n;i++)
   {
       tab2[i]=rand()%100+1;
       printf("%d",tab2[i]);
   }
   printf("\n");
    printf("Wartosci w tab3 po dodaniu wartosci tab1 i tab2: \n",suma(n,tab1,tab2,tab3));
    printf("Wieksze wartosci zapisane z tab1 i tab2 do tab3: \n",wiekszy(n,tab1,tab2,tab3));
    printf("Wartosci przypisane: \n",przypisz(n,tab1,tab2,tab3));
    return EXIT_SUCCESS;



}
