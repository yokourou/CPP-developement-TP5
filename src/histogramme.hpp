#ifndef HistogrammeGRAMME_HPP__
#define HistogrammeGRAMME_HPP__

#include <iostream>

#include "valeur.hpp"

#include "echantillon.hpp"



class Classe {
    public :
        double inf;
        double sup;
        unsigned int quantite;

    public:
        Classe(double, double );
        ~Classe();

        double getBorneInf() const ;
        double getBorneSup() const ;
        unsigned int getQuantite() const  ;

        void setBorneInf(double);
        void setBorneSup(double);
        void setQuantite(unsigned int);

        void ajouter();
};

/*---------------------------------------CLASSE------------------------------------*/

Classe::Classe(double a , double b) : inf(a), sup(b), quantite(0u) {
}
Classe::~Classe(){}



double Classe::getBorneInf() const {
    return inf;
}

double Classe::getBorneSup() const {
    return sup;
}

unsigned int Classe::getQuantite()  const{
    return quantite;
}

/*--------------------------------setters--------------------------*/
void Classe::setBorneInf(double n_inf)  {
    inf = n_inf;
}

void Classe::setBorneSup(double n_sup)  {
    sup = n_sup;
}

void Classe::setQuantite(unsigned int n_q)  {
    quantite = n_q;
}
/*------------------------------------------------------------------*/


void Classe::ajouter() {quantite++;}
/*---------------------------------------Histogrammegramme------------------------------------*/




class Histogramme {

    public:
        double as, double bs, int z;
        vector<Classe> classes;
    public:

        Histogramme(double , double , int z);
        ~Histogramme();

        vector<Classe> getClasses() const ; 


};


Histogramme::Histogramme(double x, double y, int z):as(x), bs(y), z(z) {
    n=0.0
    tmp = x;
    vector<Classe> v_cs;
    for (int i=0; i<z;++i) {
        v_cs.push_back(Classe(tmp, tmp+2.0, 0u));
        tmp+=2.0;
    }
    classes =v_cs;
}
   
Histogramme::~Histogramme(){}

vector<Classe> Histogramme::getClasses() const {
    return classes;
}
#endif 