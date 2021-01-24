#include "iostream"
#include "Depozit.h"
#include "Animal.h"
using namespace std;

int main(){
    Ferma* ferm = new Ferma();

    Hrana** hranaPorci = new Hrana*[2];
    hranaPorci[0] = new Hrana(4, "graunte");
    hranaPorci[1] = new Hrana(5, "iarba");

    Hambar** hambare = new Hambar*[5];
}