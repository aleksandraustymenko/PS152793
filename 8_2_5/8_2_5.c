#include <stdio.h>

void funkjca(char* var)
{
    FILE* pfile = fopen(var,"r");
    int tab[256] = {0};
    char s;
    while(fscanf(pfile,"%c",&s) == 1)
    {
        tab[s]++;
    }
        for(int i=0;i<256;i++)
        {
            if(tab[i]>0)
            {
                printf("%c : %i\n",i,tab[i]);
            }
        }
}
int main()
{
   funkjca("file.txt");
   return 0;
}


