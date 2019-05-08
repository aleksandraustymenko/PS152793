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
int main()
{
    struct element* var=utworz();
    var=dodaj(var,3);
    printf("%i\n",var->i);//var to jest wskaznikiem
    var=dodaj(var,8);
    printf("%i",var->i);
    return 0;
}
