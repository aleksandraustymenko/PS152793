#include <stdio.h>

void przepisz(int const *a,int *b)
{
    *b=*a;
}
int main()
{
    int i=19;
    const int s=23;
    const int* ptrToconst=&s;
    int* const constPtrtoInt=&i;
    przepisz(ptrToconst,constPtrtoInt);
    printf("%d\n",*constPtrtoInt);
    return 0;
}
