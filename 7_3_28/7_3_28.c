#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct element
{
    int i;
    struct element* next;
};
struct element* utworz()
{
    struct element* wp = malloc(sizeof(struct element));
    wp->next=NULL;
    return wp;
}
struct element* utworz2()
{
    return NULL;
}
struct element* dodaj2(struct element* Lista,int a)
{
  struct element *wsk =malloc(sizeof(struct element));
  wsk->i=a;
  wsk->next=Lista;
  return wsk;
}
void dodaj(struct element* lista,int a)
{
    struct element* wsk=malloc(sizeof(struct element));
    wsk->i=a;
    wsk->next=lista->next;
    lista->next=wsk;
}
int max(struct element* lista)
{
    struct element* wsk;
    int maks = abs(lista->next->i-lista->next->next->i);
    for(;lista->next!=NULL;lista=lista->next)
        for(wsk = lista->next;wsk!=NULL;wsk=wsk->next)
            if(abs(wsk->i-lista->i)<maks)
               maks=abs(wsk->i-lista->i);
    return maks;
}
int max2(struct element* lista)
{
    struct element* wsk;
    int maks = abs(lista->i-lista->next->i);
    for(;lista->next!=NULL;lista=lista->next)
        for(wsk = lista->next;wsk!=NULL;wsk=wsk->next)
            if(abs(wsk->i-lista->i)<maks)
               maks=abs(wsk->i-lista->i);
    return maks;
}
int main()
{
    struct element* var=utworz();//z glowa
    struct element* var2=utworz2();
    dodaj(var,10);//z glowa
    var2=dodaj2(var2,6);
    dodaj(var,2);//z glowa
    var2=dodaj2(var2,11);
    dodaj(var,15);
    var2=dodaj2(var2,5);
    dodaj(var,18);
    var2=dodaj2(var2,9);
    printf("Z glowa: %i %i %i %i\n",var->next->i,var->next->next->i,var->next->next->next->i,var->next->next->next->next->i);
    printf("Bez glowy: %i %i %i %i\n",var2->i,var2->next->i,var2->next->next->i,var2->next->next->next->i);
    printf("Maksymum (z glowa):%i\n",max(var));
    printf("Maksymum (bez glowy):%i",max2(var2));
    return 0;
}
