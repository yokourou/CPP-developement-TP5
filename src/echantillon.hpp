#ifndef Echantillon__HPP__
#define Echantillon__HPP__

#include <iostream>
#include <vector>

#include "valeur.hpp"
class valeur;
using namespace std;

class Echantillon {
    public:
        unsigned int taille;
        vector<Valeur > tab_echentillons;
    public:
        Echantillon();
        ~Echantillon();

        unsigned int getTaille() const ;
        void ajouter(double );

        Valeur getMinimum() const;
        Valeur getMaximum() const;

        Valeur getValeur(unsigned i) {
            if (i<taille) return tab_echentillons[i];
            else throw out_of_range("index out of range");
        }
};


Echantillon::Echantillon(): taille(0u) {}
Echantillon::~Echantillon() {}


unsigned int Echantillon::getTaille()const {
    return taille;
}

void Echantillon::ajouter(double ui) {
    tab_echentillons.push_back(Valeur(ui));
    taille++; 
}


Valeur Echantillon::getMinimum() const{
    Valeur min;
    if (getTaille() != 0u) {
        min = tab_echentillons[0];

        for(unsigned i=1; i< taille; i++) {
            if (min.getNombre() > tab_echentillons[i].getNombre())  min = tab_echentillons[i];
        }
    }
    else {
        throw domain_error("echantillon vide");
    }
    return min;
}
Valeur Echantillon::getMaximum() const {
    Valeur max;
    if (getTaille() != 0u) {
        max = tab_echentillons[0];
        for(unsigned i=1; i< taille; i++) {
            if (max.getNombre() < tab_echentillons[i].getNombre() )  max = tab_echentillons[i];
        }
    }

    else {
        throw domain_error("echantillon vide");
    }
    return max;
}








#endif 