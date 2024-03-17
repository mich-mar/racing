
# Zadanie nr 1: Miganie diodą 

## Opis zadania
- Projekt stworzony w STM32CubeIDE dla mikrokontrolera STM32F205RGT6.
- Projekt został skonfigurowany do pracy z zewnętrznym źródłem taktowania o częstotliwości 16MHz.
- Program realizuje funkcję mrugania diodą podłączoną do pinu PA5 z częstotliwością 5Hz przy użyciu timera.
- W projekcie został również zaimplementowany mechanizm Watchdog, resetujący system po 4 sek.


# Zadanie nr 2: Znajdowanie punktów na zewnątrz zbioru

## Opis zadania
Celem tego zadania jest zaimplementowanie algorytmu znajdowania otoczki w okól zbioru punktów na przestrzeni dwuwymiarowej.

## Rozwiązanie zadania
Rozwiązanie opiera się na znanym algorytmie zwanym "gift wrapping". Algorytm ten działa w następujący sposób:
- Wybiera punkt o najmniejszej współrzędnej y (najbardziej na lewo od 0Y). 
- Sortuje wszystkie pozostałe punkty względem kąta utworzonego przez punkt początkowy i pozostałe punkty. 
- Iteruje przez poszczególne punkty i usuwa te, które nie należą do otoczki (wyklucza te punkty, których kąt jest wklęsły w orientacji trzech punktów). 
- Pozostałe punkty tworzą otoczkę wypukłą.
