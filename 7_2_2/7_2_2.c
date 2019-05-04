#include <stdio.h>

struct trojkat
{
    double a,b,c;
};
void funkcja (struct trojkat troj1,struct trojkat *troj2)
{
    *troj2=troj1;
}
int main()
{

    struct trojkat tr1={3.5,6.7,2.8};
    struct trojkat tr2={4.5,.45,2.4};
    funkcja(tr1,&tr2);
    printf("%.2lf %.2lf  %.2lf",tr2.a,tr2.b,tr2.c);
    return 0;
}

