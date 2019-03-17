| cw 1 | cw 2| cw 3|
|---|---|---|
| 2 pkt | 2 pkt | 2 pkt|

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


