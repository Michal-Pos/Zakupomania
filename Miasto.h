//
// Created by michal on 01.01.2023.
//

#ifndef ZALICZENIOWY_MIASTO_H
#define ZALICZENIOWY_MIASTO_H
#include "J_Handlowa.h"
#include "Mieszkaniec.h"


#include <vector>
using namespace std;

class Miasto {
private:
    vector<Mieszkaniec*> lista_mieszkancow = {}; //Mieszkańcy
    vector<Sklep*> lista_sklepow = {}; // Sklepy
public:
    Miasto& operator+=(Mieszkaniec* m);
    Miasto& operator-=(Mieszkaniec* m);

    Miasto& operator+=(Sklep* sk);

    bool dodaj_sklep(Sklep* Sk);
    bool dodaj_Mieszkanca(Mieszkaniec* M);
    //gettery
    vector<Mieszkaniec*> daj_mieszkancow() const{return lista_mieszkancow;}
    vector<Sklep*> daj_sklepy() const {return lista_sklepow;}
    void wypisz_stan();

    //Konstruktor
    Miasto() = default; //zakładamy jedno miasto
    //techniczne\
    Miasto(const Miasto&) = delete; //kopiujący, zakłądamy że nie ma innych miast
    Miasto& operator=(const Miasto&) = delete; // nie kopiujemy miast
    Miasto(Miasto&&) = delete; // miasto jest tylko jedno
    Miasto& operator=(Miasto&&) = default; // miasto jest tylko jedno
    static Miasto* daj_miasto() {
        static Miasto m;
        return &m;
    }
};


#endif //ZALICZENIOWY_MIASTO_H
