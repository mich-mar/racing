#include "file_reader.h"

file_reader::file_reader(std::string name) : file_name(name){}

int file_reader::read_file()
{
    bool first = true;
    float temp;

    std::ifstream input(file_name);
    //sprawdzenie, czy plik został pomyślnie otwarty
    if (!input.is_open()) {
        std::cerr << "Nie można otworzyć pliku" << std::endl;
        return 1;
    }

    //zapisanie danych do wektora i zmiennej inputs_amount
    while (input >> temp)
    {
        if(first == false)
        {
            coordinates.push_back(temp);
        }
        else
        {
            inputs_amount = (int)temp;
            first = false;
        }
    }

    return 0;
}

std::vector<float> file_reader::get_coordinates()
{
    return coordinates;
}

int file_reader::get_inputs_amount() const
{
    return inputs_amount;
}