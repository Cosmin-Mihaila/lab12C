#include "Hrana.h"

int Hrana::getKg(){
    return kg;
}

Hrana::Hrana(int kg, char* nume){
    this->kg = kg;
    this->nume_hrana = nume;
}

Hrana::Hrana(){}