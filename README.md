# Gra w życie

:baby: 

Napisz program, który definiuje zmodyfikowaną wersję gry w życie. Gdzie istnieje obiekt planszy, który posiada komórki w stanie 0 lub 1 i zestaw efektów, które sa nakładane na plansze. Efekty są nakładane za pomocą metody _apply_, która będzie częścią mechanizmu późnego wiązania.

Efekty będą identyfikowane za pomocą unikalnego kodu:

0. Zamienia pola na czarne
1. Zamienia pola na białe
2. Zamienia pola z białego na czarne, a czarne na białe
3. Jeżeli piksel jest biały i nie posiada 2 lub 3 sąsiadów białych to kolorowany jest na czarno
   - jeżeli pozycja sąsiada wykracza poza planszę to należy zastosować zawijanie planszy (ostatni przykład)
4. Jeżeli piksel jest czarny i posiada 3 sąsiadów białych to kolorowany jest na biało w przeciwnym razie na czarno
   - jeżeli pozycja sąsiada wykracza poza planszę to należy zastosować zawijanie planszy (ostatni przykład)
5. Na podstawie dwóch planszy definiuje wyjście w następujący sposób:
   - jeżeli A(x,y)==0 i B(x,y)==1 to wtedy B(x,y) na biało
   - jeżeli A(x,y)==1 i B(x,y)==0 to wtedy B(x,y) na biało
   - jeżeli A(x,y)==1 i B(x,y)==1 to wtedy B(x,y) na czarno
   - jeżeli A(x,y)==0 i B(x,y)==0 to wtedy B(x,y) na czarno
   - jeżeli nie była wcześniej podana plansza to efekt zapamiętuje stan podanej planszy
   - jeżeli była wcześniej plansza to efekt przechodzi w stan nie posiadania planszy gdzie A to pierwsza plansza, a B druga plansza
5. Na podstawie dwóch planszy definiuje wyjście w następujący sposób:;
   - jeżeli A(x,y)==1 to wtedy B(x,y) na biało;
   - jeżeli A(x,y)==0 to wtedy B(x,y) na czarno;
   - jeżeli nie była wcześniej podana plansza to efekt zapamiętuje stan podanej planszy;
   - jeżeli była wcześniej plansza to efekt przechodzi w stan nie posiadania planszy
   - gdzie A to pierwsza plansza, a B druga plansza

Program na wejściu będzie otrzymywał w kolejnych liniach 6 liczb na linię, gdzie pierwsze 4 _(x, y, dx, dy)_ będą definiowały obszar na plaszy, na którą ma zostać nałożony efekt, piąta _e_ liczba bedzie oznaczała kod efektu, a ostatnia _d_ liczba numer planszy. Na wyjściu powinien pojawić się stan z ostatnio przetworzonej planszy.

Efekt powinien być nałożony tylko wtedy jak dane wejściowe posiadają poprawne wartości. Linie, które posiadają niepoprawne wartości są pomijane:

x ∈ {0,…,15}
y ∈ {0,…,15}
dx ∈ {x,…,15}
dy ∈ {y,…,15}
e ∈ {0,…,6}
d ∈ {0,…,1}

W programie powinny znajdować się 2 obiekty plansz, które mają wielkość _16x16_

Poniżej zestaw przykładowych wejść i wyjść z programu. Przykładowe wejście:
```6 6 10 10 1 1
```
Oczekiwane wyjście:
```0000000000000000
0000000000000000
0000000000000000
0000000000000000
0000000000000000
0000000000000000
0000001111100000
0000001111100000
0000001111100000
0000001111100000
0000001111100000
0000000000000000
0000000000000000
0000000000000000
0000000000000000
0000000000000000
```
Przykładowe wejście:
```8 8 8 14 1 0
0 4 4 8 1 1
0 0 15 15 5 0
0 0 15 15 5 1
```
Oczekiwane wyjście:
```0000111110000000
0000111110000000
0000111110000000
0000111110000000
0000111110000000
0000000000000000
0000000000000000
0000000000000000
0000000011111110
0000000000000000
0000000000000000
0000000000000000
0000000000000000
0000000000000000
0000000000000000
0000000000000000
```

