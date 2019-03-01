#include <stdio.h>

int main()
{
    int n,m,pom1,pom2,sum=0;
    printf("Podaj liczbe n: \n");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        pom1=n;
        pom2=i;
        while(pom1*pom2!=0)
            if(pom1<pom2)
            pom2=pom2%pom1;
        else
            pom1=pom1%pom2;
        if((pom1==1)||(pom2==1))
            sum+=i;
    }
    printf("Wynik dzialania %d\n",sum);
    return 0;
}
