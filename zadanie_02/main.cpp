#include "file_reader.h"
#include "issue_solver.h"

int main()
{
    std::string file_name = "input.txt";
    file_reader coordinates(file_name);
    coordinates.read_file();
    issue_solver answer(coordinates.get_coordinates(),coordinates.get_inputs_amount()) ;
    answer.print_points();
    answer.print_result_points();

    return 0;
}
