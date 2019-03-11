#include <stdio.h>

int suma(int *a_a,int *a_b);
int main(void)
{
    int a,b;
    scanf("%i",&a);
    scanf("%i",&b);
    printf("Suma:%i",suma(&a,&b));
    return 0;
}
int suma(int *a_a,int *a_b)
{
    int suma;
    suma=*a_a+*a_b;
    getchar();
    return suma;
}
