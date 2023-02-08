//
// Created by michal on 07.02.2023.
//

#ifndef ZALICZENIOWY_SYMULACJA_H
#define ZALICZENIOWY_SYMULACJA_H
#include "Miasto.h"
#include "Sklep.h"

//1. Tworzenie miasta i zwykłych sklepów. Każdy sklep powinien mieć co najmniej dwa towary z niezerową
//liczbą sztuk.
//2. Stworzenie co najmniej dwu sieci (z co najmniej dwoma z wcześniej utworzonych sklepów każda).
//3. Przejęcie jednej sieci przez drugą.
//4. Tworzenie klientów rozmaitych rodzajów (co najmniej jeden klient każdego rodzaju).
//5. Wypisanie stanu symulacji (stan sklepów i kupujących).
//6. Przejście w pętli przez wszystkich kupujących i wysłanie do każdego komunikatu kup prezent (tj.
//        wywołanie metody kupującej).
//7. Wypisanie stanu symulacji (stan sklepów i kupujących).


class Symulacja {
private:
    Miasto M;
public:
    void stwórz_Miasto(){
        M = Miasto();
    }
    void dodaj_Sklepy(){
//
    }

};


#endif //ZALICZENIOWY_SYMULACJA_H
