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
void dodaj(struct element* lista,int a)
{
    struct element* wsk=malloc(sizeof(struct element));
    wsk->i=a;
    wsk->next=lista->next;
    lista->next=wsk;
}
struct element* znajdzp(struct element* lista,int a)
{
  while((lista->next!=NULL)&&(lista->next->i!=a))
        lista=lista->next;
  return lista;
}
int main()
{
    struct element* var=utworz();
    dodaj(var,5);
    dodaj(var,10);
    dodaj(var,4);
    dodaj(var,2);
    printf("%i\n",var->next->i);
    var=znajdzp(var,10);
    printf("%i",var->next->i);
    return 0;
}
