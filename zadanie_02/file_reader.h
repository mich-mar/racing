#ifndef ZADANIE_02_FILE_READER_H
#define ZADANIE_02_FILE_READER_H

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

//================= FILE READER =====================
// - czyta liczby z pliku
// - zapisuje osobno ilość koordynat i współrzędne
//   poszczególnych punktów
//===================================================

class file_reader {
    std::vector<float> coordinates;
    int inputs_amount;
    std::string file_name;
public:
    file_reader(std::string file_name);
    int read_file();
    std::vector<float> get_coordinates();
    int get_inputs_amount();
};

#endif //ZADANIE_02_FILE_READER_H
