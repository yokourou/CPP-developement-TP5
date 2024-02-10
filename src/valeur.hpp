#ifndef VALEUR__HPP__
#define VALEUR__HPP__

#include <iostream>

class Valeur {

    public:
        double nombre ;
    public: 
        Valeur(double);
        Valeur();
        ~Valeur();

        double getNombre()const ;
        void setNombre(double);

};


Valeur::Valeur(double a): nombre(a) {}
Valeur::Valeur(): nombre(0.0) {}

Valeur::~Valeur(){}

void Valeur::setNombre(double n_v) { nombre = n_v;}
double Valeur::getNombre()const {return nombre;}




#endif 