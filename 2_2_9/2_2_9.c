#include <stdio.h>
double pow(double x, int e) {
  int i;
    double r = 1;
 for (i = 0; i < e; i++) {
    r *= x;
    }
  return r;
}
int abs(int liczba)
{
 if(liczba >= 0)
    {
    return liczba;
    }
else
    {
return (liczba*(-1));

   }
}
double pierwiastek(double a, double n)

{
 double result = a;
 double tmp = pow(result,(n-1));
 double e = 0.00000001;
 while (abs(a - tmp * result)>= e)
 {
 result = 1/n*((n-1)*result + (a/tmp));
    tmp = pow(result, n-1);
 }
return result;
}
int main()
{

   int m = 3;
    double n = 729;
    int pierw = pierwiastek(n,m);
printf("pierwiastek %i stopnia z %.lf = %i\n", m, n,pierw);
   return 0;
}

