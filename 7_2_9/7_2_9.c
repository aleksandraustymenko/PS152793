#include <stdio.h>

struct lista
{
    int var;
    struct lista* ptr;
};
int main()
{
    struct lista obiekt ={3,NULL},obiekt2={5,&obiekt};
    printf("%d %d",obiekt2.var,obiekt2.ptr->var);//->wskaznik
    return 0;
}

