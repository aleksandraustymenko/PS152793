#include <stdio.h>

int main()
{
    int a,b,i,suma=0;
    scanf("%i",&a);
    scanf("%i",&b);

    for(i=0;i<b+1;i++)
     {
         printf("%4i\n",i);
         suma+=i*i;
         printf("%i",suma);
     }

    return 0;
}
