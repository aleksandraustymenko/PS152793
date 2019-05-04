#include <stdio.h>


struct trojkat//rownoleglobok
{
    double a,h;
};
struct prostokat
{
    double a,b;
} ;
struct trapez
{
    double a,h,b;
};
union wymiary {
    struct trojkat troj,rown;
    struct  prostokat prost;
    struct trapez tr;
};
struct figura
{
   int fig;
   union wymiary wym;// struktura oszcenza pamiec

};
double pole(struct figura f)
{
    switch(f.fig)//liczba odwol do fig
    {
    case 1:
        {
            return (f.wym.troj.a*f.wym.troj.h)/2;
        }
    case 2:
        {
            return (f.wym.rown.a*f.wym.rown.h);
        }
    case 3:
        {
            return (f.wym.prost.a*f.wym.prost.b);
        }
    case 4:
        {
            return(f.wym.tr.a+f.wym.tr.b)*(f.wym.tr.h*0.5);
        }
    }

}
int main()
{
    struct trojkat troj={2.3,4.5};
    struct figura fig={1,.wym.troj=troj};
    printf("%.2lf",pole(fig));
    return 0;
}
