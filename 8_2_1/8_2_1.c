#include <stdio.h>

FILE * otworz(char* var)
{
    return fopen(var,"r");
}
int main()
{
    FILE * fl=otworz("file.txt");
    return 0;
}

