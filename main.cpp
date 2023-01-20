#include <iostream>
#include "Miasto.h"
#include "Sklep.h"
#include "Towar.h"
#include <vector>
#include <string>
#include <random>
#include<cstdlib>
using namespace std;

int generateRandomNumber(int n) {
    random_device rd; // used to obtain a seed for the random number engine
    mt19937 gen(rd()); // standard mersenne_twister_engine seeded with rd()
    uniform_int_distribution<> dist(1, n); // define the range

    return dist(gen);
}

Sklep* wygeneruj_asortyment(Sklep* S){
    vector<string> l = {"Chleb", "Mleko", "Jajka", "Ser", "Masło", "Cukier", "Herbata", "Kawa", "Cebula", "Ziemniaki"};
    int ilosc_produktow = generateRandomNumber(10);
    cout<<ilosc_produktow<<endl;
    vector<Towar> lista_Towarow;

    for (int i = 0; i<min((int)l.size(), ilosc_produktow); i++){

        float cena = generateRandomNumber(30);
        int ilosc = generateRandomNumber(20);
        Towar* T = new Towar(ilosc, cena, l[i]);
        S->dodaj_Towar(T);
    }
    for (Towar towar: lista_Towarow){
        S->dodaj_Towar(&towar);
    }
    S->wypisz_stan();
};


int main() {
//    Towar T1(2,12,"Woda");
//    T1.wypisz_stan();
//    T1.ustaw_cene(12.5);
//    T1.wypisz_stan();
////
//    Towar T2(10,9,"Zioło");
//    T2.wypisz_stan();
//    T2.ustaw_cene(17);
//    T2.wypisz_stan();

    Sklep Pulawska(17,18);
//    Pulawska.dodaj_Towar(&T1);
//    Pulawska.dodaj_Towar(&T2);
    Pulawska.wypisz_stan();
    wygeneruj_asortyment(&Pulawska);

//    Towar* T = Pulawska.sprawdz_Towar("Zioło");
//    Pulawska.sprzedaj_Towar(T);
    Pulawska.wypisz_stan();

    Pulawska.sprawdz_Towar("Chleb");



    return 0;
}
