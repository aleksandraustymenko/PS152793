#include <stdio.h>
#include <stdlib.h>

FILE* funkcja(char* var)
{
    return fopen(var,"a");
}
int main()
{
    FILE* p = funkcja("file.txt");
    char ch;
    printf("%i",fscanf(p,"%c",&ch)); // powinien zwr�ci� -1
    return 0;
}
