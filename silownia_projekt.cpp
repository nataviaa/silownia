
#include <iostream>

#include "Dieta.h"
#include "Dietetyk.h"
#include "Grupa_zajeciowa.h"
#include "Karnet.h"
#include "Karnet_miesiêczny.h"
#include "Karta_zdrowia.h"
#include "Klient.h"
#include "Recepcjonista.h"
#include "Subskrypcja_.h"
#include "Trener.h"
#include "Trening_personalny.h"
#include "Wejœcie_jednorazowe.h"
#include "Wizyta_u_dietetyla.h"

using namespace std;

vector <Trener*> vector_trener;
vector <Dietetyk*> vector_dietetyk;
vector <Recepcjonista*> vector_recepcjonista;
vector <Klient*> vector_klient;

void recepcjonista(Recepcjonista* zalogowany)
{
    cout << "Nacisnij konkretny przycisk aby wybrac opcje:" << endl;
    cout << "1.Wyswietl podpisane karnety z klientami." << endl;
    cout << "2.Stworz harmonogram." << endl;
    cout << "3.Modyfikuj harmonogram." << endl;
    cout << "4.Dodaj nowy karnet." << endl;

    int a;
    cin >> a;


}

void trener(Trener* zalogowany)
{
    cout << "Nacisnij konkretny przycisk aby wybrac opcje:" << endl;
    cout << "1.Wyswietl swoje grupy zajeciowe." << endl;
    cout << "2.Wyswietl swoje treningi personalne." << endl;
    cout << "3.Wyswietl karty zdrowia swoich klientow." << endl;
    cout << "4.Zmien swoja dyspozycyjnosc na nastepny miesiac." << endl;
    cout << "5.Wyswietl swoj harmonogram" << endl;

    int a;
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "Twoje grupy zajeciowe: " << endl;
        for (int i = 0; i < zalogowany->_unnamed_Grupa_zajeciowa_.size(); i++)
        {
            cout << zalogowany->_unnamed_Grupa_zajeciowa_[i]->get_rodzaj() << " ";
        }
        cout << endl;
        break;

    case 2:
        cout << "Twoje treningi personalne: " << endl;
        for (int i = 0; i < zalogowany->_unnamed_Trening_personalny_.size(); i++)
        {
            cout << zalogowany->_unnamed_Trening_personalny_[i]->_unnamed_Klient_->get_imie() << " ";

        }
        cout << endl;
        break;

    case 3:
        cout << "Karty zdrowia Twoich klientow: " << endl;
        for (int i = 0; i < zalogowany->_unnamed_Grupa_zajeciowa_.size(); i++)
        {
            for (int m = 0; m < zalogowany->_unnamed_Grupa_zajeciowa_[i]->_unnamed_Klient_.size(); m++)
                zalogowany->wglad_do_karty_zdrowia(*(zalogowany->_unnamed_Grupa_zajeciowa_[i]->_unnamed_Klient_[m]));

        }
        cout << endl;
        break;
    case 4:break;
    case 5: break;
    default:
        break;
    }
}

void dietetyk(Dietetyk* zalogowany)
{
}
void klient(Klient* zalogowany)
{
    if (zalogowany->get_karnet() == nullptr)
    {
        cout << "Klient nie posiada kupionego karnetu." << endl;
        cout << "Nacisnij konkretny przycisk aby wybrac opcje:" << endl;
        cout << "1. Kup karnet miesieczny." << endl;
        cout << "2. Kup jednorazowe wejscie." << endl;
        cout << "3. Odnawiaj karnet cyklicznie. " << endl;
        int a;
        cin >> a;
        switch (a)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        default:
            break;

        }


    }

    cout << "Nacisnij konkretny przycisk aby wybrac opcje:" << endl;
    cout << "1. Sprawdz waznosc swojego karnetu." << endl;
    cout << "2. Zapisz sie na zajecia grupowe." << endl;
    cout << "3. Zapisz sie na trening personalny." << endl;
    cout << "4. Zapisz sie do dietetyka." << endl;
    cout << "5. Dodaj kartê zdrowia" << endl;
    cout << "6. Przedluz waznosc swojego karnetu" << endl;
    cout << "7. Edytuj dane osobowe" << endl;
    cout << "8. Wyswietl harmonogram prowadzaonych zajec grupowych." << endl;
    int a;
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "Karnet jest aktywny do dnia:";
        //zalogowany->get_karnet()->
        cout << endl;
        break;
    case 2:
        //wyswietl wszytskie grupy
        //wybierz grupe
        //zalogowany->zapisz_do_grupy(Grupa, *zalogowany);
        break;
    case 3:
        cout << "Wybierz date treningu: " << endl;
        break;
    case 4:
        cout << "Wybierz date wizyty: " << endl;
        break;
    case 5:
    {
        cout << "Wprowadz podstawowe dane zdrowotne." << endl;

        int masa, wzrost;
        string krew;
        cout << "Podaj swoja mase ciala[kg]: ";
        cin >> masa;
        cout << "Podaj swoj wzrost[cm]: ";
        cin >> wzrost;
        cout << "Podaj swoja grupe krwi: ";
        cin >> krew;
        Karta_zdrowia k(masa, wzrost, krew, zalogowany);
        zalogowany->dodaj_karte_zdrowia(k);
    }
    break;
    case 6:
        //zalogowany->get_karnet()
        break;
    case 7:
        //zalogowany->uaktualnij_dane();
        break;
    case 8: break;
    default:
        break;
    }
}
void strefa_pracownika()
{
    cout << "Podaj id: ";
    int id;
    cin >> id;
    for (int i = 0; i < vector_recepcjonista.size(); i++)
    {
        if (vector_recepcjonista[i]->get_id() == id)
        {
            cout << "Podaj haslo: " << endl;
            string haslo;
            cin >> haslo;
            if (vector_recepcjonista[i]->get_haslo() == haslo)
            {
                cout << "Logowanie zokonczoe sukcesem." << endl;
                recepcjonista(vector_recepcjonista[i]);
                break;

            }
            else cout << "Bledne haslo." << endl;

        }

    }
    for (int i = 0; i < vector_trener.size(); i++)
    {
        if (vector_trener[i]->get_id() == id)
        {
            string haslo;
            cout << "Podaj haslo:" << endl;
            cin >> haslo;
            if (vector_trener[i]->get_haslo() == haslo)
            {
                cout << "Logowanie zokonczoe sukcesem." << endl;
                trener(vector_trener[i]);
                break;
            }
            else cout << "Bledne haslo." << endl;

        }

    }
    for (int i = 0; i < vector_dietetyk.size(); i++)
    {
        if (vector_dietetyk[i]->get_id() == id)
        {
            cout << "Podaj haslo: " << endl;
            string haslo;
            cin >> haslo;
            if (vector_dietetyk[i]->get_haslo() == haslo)
            {
                cout << "Logowanie zokonczoe sukcesem." << endl;
                dietetyk(vector_dietetyk[i]);
                break;
            }
            else cout << "Bledne haslo." << endl;
            break;
        }

    }


}
void strefa_klienta()
{
    cout << "Podaj imie: ";
    string imie;
    cin >> imie;
    for (int i = 0; i < vector_klient.size(); i++)
    {
        if (vector_klient[i]->get_imie() == imie)
        {
            cout << "Podaj haslo: " << endl;
            string haslo;
            cin >> haslo;
            if (vector_klient[i]->get_haslo() == haslo)
            {
                cout << "Logowanie zokonczoe sukcesem." << endl;
                klient(vector_klient[i]);
            }
            else cout << "Bledne haslo." << endl;

        }

    }


}
void wybor_strefy()
{
    cout << "||----------------------|||--------------------||" << endl;
    cout << "||   Strefa Pracownika  |||    Strefa Klienta  ||" << endl;
    cout << "||----------------------|||--------------------||" << endl;
    cout << "||       Kliknij 1      |||      Kliknij 2     || " << endl;
    cout << "||----------------------|||--------------------||" << endl;
    int a;
    cin >> a;
    if (a == 1) strefa_pracownika();
    else if (a == 2) strefa_klienta();
    else
    {
        system("cls");
        cout << "Wprowadzony zly znak." << endl;
        wybor_strefy();
    }
}

int main()
{
    Klient klient_uno("Andrzej", " Giza ", 1990);
    Grupa_zajeciowa Yoga1(18,13,1,3,"Yoga");
    klient_uno.zapisz_do_grupy(&Yoga1,klient_uno);
    Yoga1.wypisz1();

    Dietetyk dietetyk_uno("Eryk", "Broda", 1);
    klient_uno.zapisz_do_dietetyka(1, 14.50, 43, &dietetyk_uno, &klient_uno);
   
    Trener trener_uno("Eryk", "Broda", 1);
    klient_uno.zapisz_na_trening(5, 18.22, "srednia", &trener_uno, &klient_uno);

    Klient klient2("Anne", " Kowalska", 2001);
    Recepcjonista recepcjonista2("Kasia", "Nowak", 15);
    klient2.zakup_karnetu("tak", 89, 7, 07, &klient2);

    Klient klient3("Jakuba", " Mieszko", 1999);
    Recepcjonista recepcjonista3("Kasia", "Nowak", 15);
    klient3.zakup_wejscia_jednorazowego(20, 4, &klient3);


    Klient klient4("Miloszowi", " Twardakowi", 1993);
    klient4.wypisz3();
   Karnet_miesiêczny karnet( 30, 1, 90);
   karnet.wypisz2();
    karnet.przedluz(&karnet, &klient4);
    
    Klient klient5("Karolina", " Jaszyk", 2000);
    klient5.wypisz4();
    Karnet_miesiêczny karnet1(24, 4, 40);
    karnet.zawies(&karnet1, &klient5);


    system("pause");
    return 0;
    
}
