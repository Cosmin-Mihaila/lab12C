#ifndef _HAMBAR_
#define _HAMBAR_

#include "Hrana.h"
#include "Animal.h"
class Hambar: public Animal{
    int numar_de_animale;
    Hrana** mancare;
public:
    Hambar(int, Hrana**, char*);
    Hrana** getMancare();
    Hambar();
};

#endif