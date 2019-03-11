#include <stdio.h>

int mniejsza(int *a,int *b)
{
    if(*a<*b)
        return *a;
    else
        return *b;
}
int main(void)
{
    int x,y;
    scanf("%i",&x);
    scanf("%i",&y);
    printf("Funkcja zwraca jako wartosc mniejsza z liczb:%i",mniejsza(&x,&y));
    return 0;
}
