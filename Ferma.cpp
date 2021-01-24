#include "Ferma.h"

Ferma::Ferma(){}

int Ferma::hranatotala(){
    Hambar** aux = hambare;
    int kgTotal = 0;
    for(int i = 0; aux[i] != NULL; i++){
        Hrana** auxHr = aux[i]->getMancare();
        for(int j = 0; auxHr[j] != NULL; j++){
            kgTotal += auxHr[j]->getKg();
        }
    }
}