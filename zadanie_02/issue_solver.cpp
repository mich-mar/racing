#include "issue_solver.h"

// orientacja trzech punktów
orientation orientation(point a, point b, point c)
{
    // różnica nachylenia odcinków między 3 pkt
    float val = (b.y - a.y) * (c.x - b.x) - (b.x - a.x) * (c.y - b.y);

    if(val == 0)
        return straight; //jedna prosta
    else if(val > 0)
        return clockwise; //zgodnie z ruchem zegara
    else
        return counterclockwise; //przeciwnie do ruchu zegara
}

issue_solver::issue_solver(std::vector<float> coordinates, int amount){
    points_amount = amount;
    point temp_point;

    for(int i = 0; i < points_amount*2; i=i+2)
    {
            temp_point.x = coordinates[i-2];
            temp_point.y = coordinates[i-1];
            points.push_back(temp_point);
    }
}

void print_vector_of_points(std::vector<point> vector, int amount) {
    for(int i = 1; i < amount; i++)
    {
        std::cout << "{" << vector[i].x << "," << vector[i].y << "} ";
    }
}

void issue_solver::print_points() {
    std::cout << "Punkty: ";
    print_vector_of_points(points, points_amount);
}

void issue_solver::gift_wrapping_algorithm()
{
    // musi być przynajmniej 3 pkt
    if (points_amount < 3)
        return;

    std::vector<int> next;
    for (int i = 0; i < points_amount; i++)
        next.push_back(-1);

    //punkt najdalej na lewo od OY
    int l = 0;
    for (int i = 1; i < points_amount; i++)
        if (points[i].x < points[l].x)
            l = i;

    //szukanie kolejnego punktu, który jest wypukły w porównaniu do reszty
    int p = l;
    int q;
    do
    {
        q = (p + 1) % points_amount;
        for (int i = 0; i < points_amount; i++)
            if (orientation(points[p], points[i], points[q]) == counterclockwise)
                q = i;

        next[p] = q; // dodajemy q jako punkt ramki
        p = q; // ustawiamy p jako kolejny punkt do iteracji
    }
    while (p != l);

    //zapisanie punktów z ramki
    result_points.push_back(points[l]);
    for (int i = 0; i < points_amount; i++)
    {
        if (next[i] != -1)
            result_points.push_back(points[i]);
    }
}

void issue_solver::print_result_points() {
    gift_wrapping_algorithm();
    std::cout << "Punkty ramki: ";
    print_vector_of_points(result_points, result_points.size());
}

