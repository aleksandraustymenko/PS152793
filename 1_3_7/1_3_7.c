#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    float delta,x1,x2,sqrtdelta;
    scanf("%i",&a);
    scanf("%i",&b);
    scanf("%i",&c);
    printf("%i %i %i\n",a,b,c);
    delta=b*b-4*a*c;
    sqrtdelta=sqrt(delta);
    printf("Delta:%f\n",sqrtdelta);
    if(delta<0)
    {
        printf("Ujemna delta\n");
    }
    if(delta>0)
    {
        x1=((b*(-1))-sqrtdelta)/2*a;
        x2=((b*(-1))+sqrtdelta)/2*a;
        printf("x1=%f x2=%f\n",x1,x2);
    }
    if(delta==0)
    {
        x1=b*(-1)/2*a;
        printf("x=%f\n",x1);
    }
    return 0;
}
