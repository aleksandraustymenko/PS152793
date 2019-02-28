#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,m;
    int x,y,Wx,Wy,W;
    scanf("%i",&a);
    scanf("%i",&b);
    scanf("%i",&c);
    scanf("%i",&d);
    scanf("%i",&e);
    scanf("%i",&m);
    printf("%ix %iy=%i \n %ix %iy=%i",a,b,c,d,e,m);
    W=a*e-b*d;
    Wx=c*e-b*m;
    Wy=a*m-c*d;
    x=Wx/W;
    y=Wy/W;
    if(a==0 && b==0 && c==0 && d==0 && e==0 && m==0)
    {
        printf("Uklad jest sprzeczny\n");
    }
    if(W!=0)
   {
       if(Wx==0 && Wy==0)
        {
             printf("Uklad ma wielu rozwiazan\n");
        }
    else
    {
        printf("x=%i ,y=%i \n",x,y);
    }
   }
   if(W==0)
   {
       printf("Wyznacznik rowny 0\n");
   }
    return 0;
}
