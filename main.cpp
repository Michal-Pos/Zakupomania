#include <iostream>
#include "Miasto.h"
#include "Sklep.h"
#include "Siec.h"
#include "Towar.h"
#include <vector>
#include <string>
#include <random>
#include<cstdlib>
using namespace std;

void print(string txt){
    cout<<txt <<endl;
}

void dodaj_Siec_Sklep(Siec* Si, Sklep* Sk){
    if (!Si->czy_Sklep_w_Sieci(Sk)){
        cout<<"Do Sieci dodano Sklep"<<endl;
        Si->dodaj_Sklep(Sk);
        Sk->ustaw_Siec(Si);
    }else
        print("Sklep już się znajduje w Sieci");//Sklep jest juz w Sieci, nic nie robimy




}
void usun_Siec_Sklep(Siec* Si, Sklep* Sk) {
    if (Si->czy_Sklep_w_Sieci(Sk)) {
        Si->usun_Sklep(Sk);
        Sk->ustaw_Siec(nullptr);
        print("Z Sieci został usunięty Sklep");
    }
}



void Mieszkaniec_kupuje(Mieszkaniec* M, string nazwa, Sklep* S){
    S->sprawdz_Towar(nazwa);

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
        Towar* T = new Towar(ilosc, cena, l[i]);
        S->dodaj_Towar(T);
    }
    for (Towar towar: lista_Towarow){
        S->dodaj_Towar(&towar);
    }
    S->wypisz_stan();
    return S;
}


int main() {
//    Towar T1(2,12,"Woda");
//    T1.wypisz_stan();
//    T1.ustaw_cene(12.5);
//    T1.wypisz_stan();

//    Towar T2(10,9,"Zioło");
//    T2.wypisz_stan();
//    T2.ustaw_cene(17);
//    T2.wypisz_stan();
    Siec Ross(17.5);
    Sklep Pulawska(17, 18);

//    dodaj_Siec_Sklep(&Ross, &Pulawska);
//    usun_Siec_Sklep(&Ross, &Pulawska);
//    dodaj_Siec_Sklep(&Ross, &Pulawska);


//    Sklep Niepodleglosci(20.5, -31);
//    Pulawska.dodaj_Towar(&T1);
//    Pulawska.dodaj_Towar(&T2);
    cout<<"Pulawska"<<endl;
    Pulawska.wypisz_stan();
//    cout<<"Niepodległosci"<<endl;
//    Niepodleglosci.wypisz_stan();

    cout<<"Dodawanie asortymentu do Pulawskiej"<<endl;
    wygeneruj_asortyment(&Pulawska);
    Pulawska.sprzedaj_Towar("Chleb", 2);
    Pulawska.wypisz_stan();
    tuple<string, float, unsigned int> naj = Pulawska.daj_najdrozszy();
    cout<<get<0>(naj)<<endl;
    tuple<string, float, unsigned int> najt = Pulawska.daj_najtanszy();
    cout<<get<0>(najt)<<endl;
//
////    cout<<"Dodawanie asortymentu do Niepodleglosci"<<endl;
//    wygeneruj_asortyment(&Pulawska);
//
////    Towar* T = Pulawska.sprawdz_Towar("Zioło");
////    Pulawska.sprzedaj_Towar(T);
//    Pulawska.wypisz_stan();
////    Niepodleglosci.wypisz_stan();
//
//    Pulawska.sprawdz_Towar("Chleb");

//    Niepodleglosci.sprawdz_Towar("Mleko");



    return 0;
}
