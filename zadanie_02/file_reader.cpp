#include "file_reader.h"

file_reader::file_reader(std::string file_name)
{
    file_reader::file_name=file_name;
}

int file_reader::read_file()
{
    int counter = 0;
    float temp;

    std::ifstream input(file_name);
    // Sprawdzenie, czy plik został pomyślnie otwarty
    if (!input.is_open()) {
        std::cerr << "Nie można otworzyć pliku input.txt" << std::endl;
        return 1;
    }

    while (input >> temp)
    {
        if(counter==!0)
        {
            coordinates.push_back(temp);
        }
        else
        {
            inputs_amount = temp;
            counter++;
        }
    }

    return 0;
}

std::vector<float> file_reader::get_coordinates()
{
    return coordinates;
}

int file_reader::get_inputs_amount()
{
    return inputs_amount;
}