#include <iostream>
#include "Miasto.h"
#include "Sklep.h"
#include "Siec.h"
#include "Towar.h"
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

//void dodaj_Siec_Sklep(Siec* Si, Sklep* Sk){
//
//    if (!Si->czy_Sklep_w_Sieci(Sk)){// Jesli sklep znajduje się w Sieci
//        if (Si->dodaj_Sklep(Sk) && Sk->ustaw_Siec(Si)) cout<<"Do Sieci  poprawnie dodano Sklep "<<Sk->daj_x()<<" "<<Sk->daj_y()<<endl;
//        else
//            cout<<"wystąpił błąd, nie udało się dodac sklepu do sieci "<<endl;
//    }else
//        cout<<"Sklep już się znajduje w Sieci"<<endl;//Sklep jest juz w Sieci, nic nie robimy
//
//}
//void usun_Siec_Sklep(Siec* Si, Sklep* Sk) {
//    if (Si->czy_Sklep_w_Sieci(Sk)) {
//        if (Si->usun_Sklep(Sk) && Sk->ustaw_Siec(nullptr)) cout<<"Z Sieci został poprawnie usunięty Sklep"<<endl;
//        else
//            cout<<"wystąpił błąd, nie udało się poprawnie usunąc Sklepu z Sieci "<<endl;
//    }
//    else print("Sklep nie znajduje się w sieci, nie można go usunąć");
//
//}

//bool przejmij_Siec(Siec *S_przejmujaca, Siec *S_przejmowana) {
//    if (S_przejmujaca!=S_przejmowana){
//        for (Sklep* sk: S_przejmowana->lista_sklepow){
//            usun_Siec_Sklep(S_przejmowana, sk);
//            dodaj_Siec_Sklep(S_przejmujaca, sk);
//        }
//        return true;
//    }
//    print("Zła instrukcja wejścia, Siec przejmująca i przejmowana są tymi samymi sieciami");
//    return false;
//}




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
//   B  |    A
//---------------
//   C  |    D
    Miasto* Warszawa = Miasto::daj_miasto();
//    Sklep Agrykola(17, 18);
    Sklep Banacha(-19, 20);
    Sklep Chmielna(-17, -18);
    Sklep Dolna(4,-3);

    Siec Pierwsza_Siec(23);
    Siec Druga_Siec(8);

//    wygeneruj_asortyment(&Agrykola);
//    wygeneruj_asortyment(&Agrykola);
//    wygeneruj_asortyment(&Banacha);
//    wygeneruj_asortyment(&Chmielna);
//    wygeneruj_asortyment(&Dolna);
//
//
//    dodaj_Siec_Sklep(&Pierwsza_Siec, &Agrykola);
//    dodaj_Siec_Sklep(&Pierwsza_Siec, &Banacha);
//
//    dodaj_Siec_Sklep(&Druga_Siec, &Agrykola);
//    dodaj_Siec_Sklep(&Pierwsza_Siec, &Dolna);
    Pierwsza_Siec+=&Dolna;
    Pierwsza_Siec.wypisz_stan();

//    Pierwsza_Siec-=&Dolna;
//    Pierwsza_Siec.wypisz_stan();

    Druga_Siec+=&Banacha;
    Druga_Siec.wypisz_stan();
    Pierwsza_Siec+=&Druga_Siec;
//    Druga_Siec-=&Banacha;
//    Pierwsza_Siec.wypisz_stan();
    Druga_Siec.wypisz_stan();

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
