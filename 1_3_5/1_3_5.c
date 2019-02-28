#include <stdio.h>
#include <math.h>

int main()

{
    int a,h,s,P,bok1,bok2,bok3;
    printf(" Obliczenie pola trojkata:\n");
    printf(" Nacisnij-1 zeby podac dlugosc i wysokosc:\n");
    printf(" Nacisnij- 2 zeby podac dlugosc trzech bokow:\n");
    scanf("%i",&a);
    if(a==1)
    {
        printf("Podaj wysokosc:\n");
        scanf("%i",&h);
        printf("Podaj dlugosc podstawy:\n");
        scanf("%i",&bok1);
        P=bok1*h/2;
    }
    else
    {
      printf("Podaj dlugosc 1 boku:\n");
      scanf ("%i",&bok1);
      printf("Podaj dlugosc 2 boku:\n");
      scanf("%i",&bok2);
      printf("Podaj dlugosc 3 boku:\n");
      scanf("%i",&bok3);
      s=(bok1+bok2+bok3)/2;
      P=sqrt(s*(s-bok1)*(s-bok2)*(s-bok3));
    }
    printf("Pole trojkata:%i\n",P);
    return 0;

}
