#include <stdio.h>
#include <stdlib.h>

void wytnij(char * ,int ,int );

int main()
{
  char tekst[]="Napisz funkcje wytnij" ;
  wytnij(tekst,2,8);
  return EXIT_SUCCESS;
}
void wytnij(char *napis ,int n,int m)
{
  int a=0;
  int b=0;
  int c=0;
  int i;
  while(napis[a]!=0)
  {
      a++;
  }
  char var[a];
   for(i=0;i<a;i++)
  {
    if(i<n||i>m)
    {
        var[c]=napis[i];
        c++;
    }
  }
  for(i=0;i<c;i++)
  {
      napis[i]=var[i];
  }
  napis[i]=0;
  printf("%s",napis);
}

