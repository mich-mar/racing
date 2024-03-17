
#ifndef ZADANIE_02_ISSUE_SOLVER_H
#define ZADANIE_02_ISSUE_SOLVER_H

#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

//struktura do przechowywania punktów
struct point {
    float x, y;
};

//enum do zapisywania orientacji
enum orientation{
    straight,
    clockwise,
    counterclockwise
};

//================= ISSUE SOLVER ====================
// - klasa do rozwiązywania problemu
// - używa algorytmu "gift-wrapping"
// - zapisuje punkty do wektora w postaci struktur
//===================================================

class issue_solver {
 std::vector<point> points; //wektor punktów
 int points_amount; //ilość punktów
 std::vector<point> result_points; //wektor punktów ramki

public:
    issue_solver(std::vector<float>coordinates, int amount);
    void gift_wrapping_algorithm(); //algorytm rozwiązujący problem

    void print_points() const; //wypisanie wektora points
    void print_result_points() const; //wypisanie wektora result_points
};

#endif //ZADANIE_02_ISSUE_SOLVER_H
