#include <stdio.h>

enum stan_polanczenia
{
    pol_naw,pol_nien,pol_trak
};
struct komputer
{
    enum stan_polanczenia stan;
    char *IP;
    char *wlasciciel;
};
void funkcja(struct komputer var)
{
   printf("%s\n",var.stan == pol_naw?"Polaczenie nawiazane":(var.stan == pol_nien?"Polaczenie nienawiazane":"Polaczenie w trakcie"));
   puts(var.IP);
   puts(var.wlasciciel);
}
int main()
{
    struct komputer kom={pol_naw,"10.5.77.9","Artiem"};
    funkcja(kom);
    return 0;
}
