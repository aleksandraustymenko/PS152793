#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element* next;
};
struct element* utworz()
{
    return NULL;
}
struct element* dodaj(struct element* Lista,int a)
{
  struct element *wsk =malloc(sizeof(struct element));
  wsk->i=a;
  wsk->next=Lista;
  return wsk;
}
struct element* funkcja(struct element* lista,struct element* lista2)
{
    struct element* var;
    struct element* var2;
    if(lista==NULL)
        return NULL;
    var=var2=lista;
    lista=lista->next;
    var2->next=lista2;
    var2=lista2;
    lista2=lista2->next;
    while(lista!=NULL)
    {
        var2->next=lista;
        var2=lista;
        lista=lista->next;
        var2->next=lista2;
        var2=lista2;
        lista2=lista2->next;
    }
    return var;
}
int main()
{
    struct element* var=utworz();
    struct element* var2=utworz();
    struct element* var3=utworz();
    var=dodaj(var,4);
    var=dodaj(var,2);
    var2=dodaj(var2,10);
    var2=dodaj(var2,3);
    printf("Bez glowy: %i %i\n" ,var->i,var->next->i);
    printf("Bez glowy: %i %i\n" ,var2->i,var2->next->i);
    var3=funkcja(var,var2);
    for(struct element* i=var3;i!=NULL;i=i->next)
          printf("%i\n",i->i);
    return 0;
}
