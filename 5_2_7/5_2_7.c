#include <stdio.h>
#include <stdlib.h>

void sklej (char *,char *,char *);
 int main()
 {
    char tekst1[]="Ala m";
    char tekst2[]="a kota";
    char tekst3[10];
    sklej(tekst1,tekst2,tekst3);
    printf("%s\n",tekst3);
    return EXIT_SUCCESS;
 }
void sklej (char *str1,char *str2,char *str3)
{
  int i,j;
  for(i=0;str1[i]!=0;i++)
  {
      str3[i]=str1[i];
  }
  for(j=0;str2[j]!=0;i++,j++)
  {
      str3[i]=str2[j];
      str1[i]=0;
  }

}
