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
protected:
    // Mieszkańcy będa mieli dostep, z kolei zmiana struktur w sieci też musi byc katalogowana
    vector<J_Handlowa*> lista_sklepow; // Sklepy i sieci
private:
    vector<Mieszkaniec*> lista_mieszkancow;
public:
    void dodaj_J_Handlowa(J_Handlowa* JH);

    //Konstruktor
    Miasto() = default; //zakładamy jedno miasto
    //techniczne\
    Miasto(const Miasto&) = delete; //kopiujący, zakłądamy że nie ma innych miast
    Miasto& operator=(const Miasto&) = delete; // nie kopiujemy miast
    Miasto(Miasto&&) = delete; // miasto jest tylko jedno
    Miasto& operator=(Miasto&&) = default; // miasto jest tylko jedno
};


#endif //ZALICZENIOWY_MIASTO_H
