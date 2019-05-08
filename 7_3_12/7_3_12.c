#include <stdio.h>
#include <stdlib.h>

//lista z glowa
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
int main()
{
    struct element* var=utworz();
    dodaj(var,6);
    printf("%i",var->next->i);
    return 0;
}
