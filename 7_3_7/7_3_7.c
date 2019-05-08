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
struct element* usun(struct element* Lista,int a)
{
  struct element *wsk;
  struct element *wsk1;
  if(Lista==NULL)
    return Lista;
  wsk=Lista;
  if(Lista->i==a)
    {
        Lista=Lista->next;
         free(wsk);
    }
   else
   {
       while((wsk->next!=NULL)&&(wsk->next->i!=a))
           wsk=wsk->next;

       if(wsk->next!=NULL)
       {
               wsk1=wsk->next;
               wsk->next = wsk1->next;
               free(wsk1);
        }

   }
   return Lista;
}
int main()
{
    struct element* var=utworz();
    var=dodaj(var,3);
    printf("%i\n",var->i);
    var=dodaj(var,8);
    printf("%i\n",var->i);
    var=usun(var,3);
    printf("%i",var->i);
    return 0;

}
