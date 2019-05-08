#include <stdio.h>
#include <stdlib.h>

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
int suma(struct element* lista)
{
    int suma = 0;
    lista=lista->next;
    while(lista!=NULL)
    {
        suma+= lista->i;
        lista=lista->next;
    }
    return suma;
}
int suma2(struct element* lista)
{
    int suma=0;
    while(lista!=NULL)
    {
        suma+=lista->i;
        lista=lista->next;
    }
    return suma;
}
int main()
{
    struct element* var=utworz();//z glowa
    struct element* var2=utworz2();
    dodaj(var,4);//z glowa
    var2=dodaj2(var2,6);
    dodaj(var,2);//z glowa
    var2=dodaj2(var2,8);
    printf("Z glowa: %i  %i\n",var->next->i,var->next->next->i);
    printf("Bez glowy: %i %i\n",var2->i,var2->next->i);
    printf("Suma(z glowa):%i\n",suma(var));
    printf("Suma(bez glowy):%i",suma2(var2));
    return 0;
}
