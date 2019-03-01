#include <stdio.h>
#include <math.h>

int main()
{
    int n,p=1,l=2;
    scanf("%i",&n);
   while((pow(l,2)+pow(p,2))<n)
   {
       printf("%.f %i %.f\n",pow(l,2)-pow(p,2),2*l*p,pow(l,2)+pow(p,2));
       l++;
       p++;
   }
   return 0;
}
