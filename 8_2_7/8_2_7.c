#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int funkjca(char* var)
{
    FILE* pfile = fopen(var,"r");
    int sum = 0;
    char s[5];

    while(fscanf(pfile,"%s",s) == 1)
    {
        sum += atoi(s);
    }
    return sum;
}
int main()
{
   printf("%i",funkjca("liczby.txt"));
   return 0;
}


