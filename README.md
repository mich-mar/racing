# Zadanie nr 2: Znajdowanie punktów na zewnątrz zbioru

## Opis zadania
Celem tego zadania jest zaimplementowanie algorytmu znajdowania otoczki w okól zbioru punktów na przestrzeni dwuwymiarowej.

## Rozwiązanie
Rozwiązanie opiera się na znanym algorytmie zwanym "gift wrapping". Algorytm ten działa w następujący sposób:
1. Wybiera punkt o najmniejszej współrzędnej y.
2. Sortuje wszystkie pozostałe punkty względem kąta utworzonego przez punkt początkowy i pozostałe punkty.
3. Iteruj przez posortowane punkty i usuwa punkty, które nie należą do otoczki, korzystając z kryterium orientacji trójki punktów.
4. Pozostałe punkty tworzą otoczkę wypukłą.
