
#ifndef ZADANIE_02_ISSUE_SOLVER_H
#define ZADANIE_02_ISSUE_SOLVER_H

#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

struct point {
    float x, y;
};

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
 std::vector<point> points;
 int points_amount;
 std::vector<point> result_points;
public:
    issue_solver(std::vector<float>coordinates, int amount);
    void print_points();
    void gift_wrapping_algorithm();
    void print_result_points();
};

#endif //ZADANIE_02_ISSUE_SOLVER_H
