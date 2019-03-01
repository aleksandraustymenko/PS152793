#include <stdio.h>

int main()
{
   int n ,sred,pocz,kon;
   printf("Podaj liczbe n: \n");
   scanf("%i",&n);
   pocz=0;
   kon=n;
   while(kon-pocz>1)
   {
       sred=(pocz+kon)/2;
       if(sred*sred<=n)
         pocz=sred;
       else
        kon=sred;
   }
   printf("Pierwistek z %d \n",n);
   if(n<=1)
    printf("%d\n",kon);
   else
    printf("%d\n",pocz);
   return 0;
}
