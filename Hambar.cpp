#include "Hambar.h"

Hrana** Hambar::getMancare(){
    return mancare;
}

Hambar::Hambar(int numarAnimale, Hrana** mancare, char* numeAnimal): Animal(numeAnimal){
    this->numar_de_animale = numarAnimale;
    this->mancare = mancare;
}

Hambar::Hambar(){}