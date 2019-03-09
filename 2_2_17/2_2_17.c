#include <stdio.h>

void zlicz();
 int main()
 {
     zlicz();
     zlicz();
     zlicz();
     return 0;
 }
 void zlicz()
 {
     static unsigned int n=0;
     n++;
     printf("Wywolana %i razy\n",n);
 }
