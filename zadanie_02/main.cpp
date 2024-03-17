#include "file_reader.h"
#include "issue_solver.h"

int main()
{
    std::string file_name = "input.txt"; //nazwa pliku do odczytu
    file_reader coordinates(file_name); //obiekt odczytujący wartości z pliku
    coordinates.read_file(); //funkcja odczytująca i zapisująca wartości do wektora
    issue_solver answer(coordinates.get_coordinates(),coordinates.get_inputs_amount()) ; //obiekt rozwiązujący problem
    answer.print_points(); //obiekt wypisuje wszystkie punkty
    answer.gift_wrapping_algorithm(); //rozwiązanie problemu
    answer.print_result_points(); //obiekt wypisuje punkty z "ramki"

    return 0;
}
