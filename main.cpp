#include <iostream>
#include "Miasto.h"
#include "Sklep.h"
#include "Towar.h"
#include "Losowy.h"
#include "Minimalista.h"
#include "Maksymalista.h"
#include "Tradycjny.h"
#include "Oszczedny.h"

#include <vector>
#include <string>
#include <random>
#include "Tradycjny.h"
#include<cstdlib>
#include "Miasto.h"


using namespace std;




void print(string txt){
    cout<<txt <<endl;
}



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
//        S+= Towar(ilosc, cena, l[i]);
//        auto* T = new Towar(ilosc, cena, l[i]);
        S->operator+=(new Towar(ilosc, cena, l[i]));
//        S+= new Towar(ilosc, cena, l[i]);
//        S->dodaj_Towar(T);
    }
//    for (Towar towar: lista_Towarow){
//        S->dodaj_Towar(&towar);
//    }
//    S->wypisz_stan();
    return S;
}





int main() {
//   B  |    A
//---------------
//   C  |    D
//1. Tworzenie miasta i zwykłych sklepów. Każdy sklep powinien mieć co najmniej dwa towary z niezerową
//liczbą sztuk.
    Miasto* Warszawa = Miasto::daj_miasto();

    // II wersja


    Sklep* Agrykola = new Sklep(17,18);
    Sklep* Banacha = new Sklep(-7,3);

    Sklep* Chmielna = new Sklep(-19, 20);
    Sklep* Dolna = new Sklep(4,-3);
    Sklep* Elblaska = new Sklep(4,-4);
//    Elblaska->operator+=(new Towar(40, 1, "Chleb"));
    vector<Sklep*> lista_sklepow = {Agrykola, Banacha, Chmielna, Dolna, Elblaska};
//    vector<Sklep*> lista_sklepow = {Elblaska};

    for (auto* sk: lista_sklepow){
        Warszawa->operator += (sk);
        sk->wypisz_stan();
    }
    Warszawa->wypisz_stan();


//    wygeneruj_asortyment(Agrykola);
//    wygeneruj_asortyment(Banacha);
//    wygeneruj_asortyment(Chmielna);
//    wygeneruj_asortyment(Dolna);
//



//2. Stworzenie co najmniej dwu sieci (z co najmniej dwoma z wcześniej utworzonych sklepów każda).

    Siec* Pierwsza_Siec  = new Siec(23);
    Siec* Druga_Siec  = new Siec(8);

    Warszawa->operator+=(Druga_Siec);
    Warszawa->operator+=(Pierwsza_Siec);

    Pierwsza_Siec->operator+=(Agrykola);
    Pierwsza_Siec->operator+=(Banacha);

    Druga_Siec->operator+=(Chmielna);
    Druga_Siec->operator+=(Dolna);

//3. Przejęcie jednej sieci przez drugą.
    Pierwsza_Siec->operator+=(Druga_Siec);

//4. Tworzenie klientów rozmaitych rodzajów (co najmniej jeden klient każdego rodzaju).
    auto* Miriam = new Minimalista(Elblaska, 13, -1, -3, "Miriam");
    auto* Maks = new Maksymalista(Elblaska, 5, -3, 43, "Maks");
    auto* Lena = new Losowy(Elblaska, 1,1, 70, "Lena");
    Miriam->wypisz_id();
//
    auto* Tomek = new Tradycjny(-4, -8, 8, "Tomek", "Chleb");
    auto* Ola = new Oszczedny(7,7, 10, "Mleko");
    Warszawa->daj_niezalezne_sklepy();

    vector<Mieszkaniec*> lista_miesz = {Tomek, Ola};
    Tomek->kup();
//    cout<<Elblaska->czy_Siec()<<endl;
//    cout<<Pierwsza_Siec->czy_Siec()<<endl;

//    for (auto* m: lista_miesz){
//        Warszawa->operator+=(m);
//    }
//    Warszawa->operator+=(Miriam);
//    Warszawa->operator+=(Maks);

//    Warszawa->wypisz_stan();
//    Warszawa->wszyscy_kup();

//5. Wypisanie stanu symulacji (stan sklepów i kupujących).

//    for (auto* sk: lista_sklepow){
//        sk->wypisz_stan();
//    }

//    for (auto* m: lista_miesz){
//        m->wypisz_stan();
//    }


//6. Przejście w pętli przez wszystkich kupujących i wysłanie do każdego komunikatu kup prezent (tj.
//        wywołanie metody kupującej).
//    for (auto* m: lista_miesz){
//        m->kup();
//    }

//7. Wypisanie stanu symulacji (stan sklepów i kupujących).

//    Warszawa->operator+=(wygeneruj_asortyment(new Sklep(17, 18)));
//
//
//////    Towar T = Towar(4, 7, "Chleb");
//////    Banacha+=&T;
////
////
//    Siec *Pierwsza_Siec = new Siec(23);
////
//    Siec *Druga_Siec = new Siec(8);
//    Siec Trzecia_Siec =
//    Pierwsza_Siec+=Druga_Siec;
//    wygeneruj_asortyment(Dolna);
////    Pierwsza_Siec+=&Druga_Siec;
////
//
//    Pierwsza_Siec+=Agrykola;
//    Pierwsza_Siec.wypisz_stan();

//    Druga_Siec+=Dolna;

//    Pierwsza_Siec+=&Druga_Siec;


////    wygeneruj_asortyment(&Agrykola);
//    wygeneruj_asortyment(&Banacha);
////    wygeneruj_asortyment(&Chmielna);
//    wygeneruj_asortyment(&Dolna);
////
////
////    dodaj_Siec_Sklep(&Pierwsza_Siec, &Agrykola);
////    dodaj_Siec_Sklep(&Pierwsza_Siec, &Banacha);
////
////    dodaj_Siec_Sklep(&Druga_Siec, &Agrykola);
////    dodaj_Siec_Sklep(&Pierwsza_Siec, &Dolna);
//    Pierwsza_Siec.wypisz_stan();
//
////    Pierwsza_Siec-=&Dolna;
////    Pierwsza_Siec.wypisz_stan();
//
//    Druga_Siec+=&Banacha;
//    Druga_Siec.wypisz_stan();
//    Pierwsza_Siec+=&Druga_Siec;
////    Druga_Siec-=&Banacha;
////    Pierwsza_Siec.wypisz_stan();
//    Druga_Siec.wypisz_stan();

//    Banacha.daj_siec()->wypisz_stan();


//    Warszawa->dodaj_sklep(&Banacha);
//    Warszawa->dodaj_sklep(&Dolna);
//    Tradycjny Mirek(0,0,30,"Chleb");
//    Mirek.znajdz_najbliz()->wypisz_stan();


//    Warszawa->wypisz_stan();
//    Banacha.wypisz_stan();
//    Pierwsza_Siec.wypisz_stan();






    return 0;
}
