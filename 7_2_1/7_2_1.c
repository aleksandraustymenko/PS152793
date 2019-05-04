//6,7,9,13,16
#include <stdio.h>

struct trojkat
{
    double a,b,c;
};
double obwod(struct trojkat x)
{
    double obwod;
    obwod=x.a+x.b+x.c;
    return obwod;
}
int main()
{
    struct trojkat tr={2.3,4.6,5.8};
    printf("%.2lf",obwod(tr));
    return 0;

}
