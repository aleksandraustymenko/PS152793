#include <stdio.h>

struct zespolone
{
    double im,re;
};
struct zespolone dodaj(struct zespolone n,struct zespolone m)
{
    struct zespolone suma = {n.im+m.im,n.re+m.re};
    return suma;
}

int main()
{
   struct zespolone a={3.4,1.2},b={7.1,3.04};
   printf("%.2lf %.2lf",dodaj(a,b).im,dodaj(a,b).re);
   return 0;

}
