| cw 1 | cw 2| cw 3| cw 4| cw 5|  wej 6 | cw 6 | kolo 1|
|---|---|---|---|---|---|---|---|
| 2 pkt | 2 pkt | 2 pkt| 2 pkt| 2 pkt | 3 pkt | 2 pkt | 20 pkt |

Uwagi:

### cw1

* 1.2.8 - nie potrzebne są printy, powoduje to że finalna średnia jest mało czytelna
* 1.2.10 - program nie liczy wartości bezwględnej - po wpisaniu 3 wyświetlane jest -3

### cw 2

* 1.3.6 - układ może być sprzeczny nie tylko w sytuacji gdy wszystkie współczynniki są zerami, dalsze warunki też nie pokrywają się z matematycznymi własnościami
* 1.3.7 - w mianowniku `2*a` powinno być w nawiasie, bo inaczej wynik nie jest poprawny
* 1.4.5 - chyba pomieszany numer zadania
* 1.4.6 - należało wyświetlić iloczyn liczb (wynik operacji matematycznej
* 1.4.7 - program też nie robi tego co trzeba
* 1.4.10 - w linijce 18 należałoby poprawić, że to część całkowita pierwiastka a nie sam pierwiastek
* 1.4.12 - algorytm wewnętrzu for błędnie napisany
* 1.4.14 - program nie wypisuje wszystkich trójek pitagoryjskich, warunek w while w linijce 8 jest błędny i zawęża liczbę trójek

### cw 3

* 2.2.9 - rozwiązanie miało być bez funkcji, przykładowa możliwość rozpisania części całkowitej pierwiastka:

```c
int potega(int liczba, int wykl)
{
    int wynik=1;
    for(int i=1;i<=wykl;i++)
    {
        wynik*=liczba;
    }
    return wynik;
}

int podlogaPierwiastek(int liczba, int stopien)
{
    int wynik;
    for(int i=0;i<=liczba;i++)
    {
        if (potega(i,stopien)<=liczba)
        {
            wynik=i;
        }
    }
    return wynik;
}
```

### cw 4

* na przyszłość w przypadku pytań proszę o założeniue issue i przypisanie go do mnie, w poleceniu trzeba zrobić wskaźnik na funkcję

```c
double fun(int x)
{
    return x+1;
}

double funkcja(double (*fun)(int arg),int a)
{
    return fun(a);
}
main()
{
    int a=1,arg,x;
    printf("%lf",funkcja((&fun),a));
    return 0;
}
```

* 3.2.5 - getchar w funkcji jest chyba zbędny

### cw5 +cw 6

* 4.2.1 - za dużo printf we wnętrz funkcji. Mało doświadczony programista może nie mieć pewności czy sprawdzamy lokalną kopię zmiennych czy zmienną zadeklarowaną w main. Podobna uwaga w niektórych pozostałych zadaniach.
* 4.2.6 - aby polecenie poprawnie było wykonane to powinny być dwie funkcje
* 4.2.7 - typ zwracany funkcji to powinien być void (funkcja nic nie zwraca). Dodatkowo w c nie jest robione co trzeba, poniższy przypadek testowy

```
int tab1[] ={2,3,4};
int tab2[] = {-2,-5,-3};
int tab3[] = {0,4,-9};
przypisz(3,tab1,tab2,tab3);
```

pokazuje, że nie jest ok. Warto stworzyć tymczasową tablicę stanowiącą buffor do skopiowania jednej z tablic.
* 4.2.9 - warto spróbować zrobić to samo prościej, tworząc jakiś buffor (jednowymiarowy) dla zmiennych.
* 4.2.10 - w a błędne założenie, że max ma być na start zero. Lepiej przyjąć na start element z tablicy o indeksie 0. Czwarta funkcja niedokładnie robi to co powinna.
* 4.2.12 - funkcja3 jest błędna, iteracja powinna być w doł. Brak podpunktu e.
