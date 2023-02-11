//
// Created by michal on 01.01.2023.
//

#include "Miasto.h"

//virtual Kosmos& operator+=(Element*); // Dodaj coś do kosmosu. Tylko do pokazania że tak można, program używa wyspecjalizowanych wersji. Wskaźnik, bo nie chcę żadnych kopii
//virtual Kosmos& operator+=(Statek*);  // Dodaj statek do kosmosu. Wskaźnik, bo nie chcę żadnych kopii.
//virtual Kosmos& operator+=(Planeta*); // Dodaj coś do kosmosu. Wskaźnik, bo nie chcę żadnych kopii.



Miasto& Miasto::operator+=(Mieszkaniec* m) {
    lista_mieszkancow.push_back(m);
    return *this;
}
Miasto &Miasto::operator-=(Mieszkaniec *m) {
    auto it = find(lista_mieszkancow.begin(), lista_mieszkancow.end(), m);
    if (it!=lista_mieszkancow.end()){
        swap(*it, lista_mieszkancow.back());
        lista_mieszkancow.pop_back();
    }
    return *this;
}




Miasto &Miasto::operator+=(J_Handlowa *jh) {
    lista_handlowych.push_back(jh);
    return *this;
}




void Miasto::wypisz_stan() {
    cout<<"*******************"<<endl;
    cout<<"W mieście znajduje się: "<<endl;
    cout<<"mieszkańcow: "<<lista_mieszkancow.size()<<endl;
    cout<<"Sklepów: "<<lista_handlowych.size()<<endl;
    cout<<"*******************"<<endl;



}

void Miasto::wszyscy_kup() {
    for (auto* m: lista_mieszkancow){
        m->kup();
    }

}

vector<Sklep *> Miasto::daj_niezalezne_sklepy() {
    vector<Sklep *> niezalezne;
    for (auto jh: lista_handlowych){
        if (typeid(jh) == typeid(Sklep)){
            niezalezne.push_back(dynamic_cast<Sklep *>(jh));
        }
    }
    return niezalezne;
}




