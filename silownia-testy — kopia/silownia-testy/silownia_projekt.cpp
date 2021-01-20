
#include <iostream>
#include <string>
#include <time.h>
#include <ctime>
#include <algorithm>

#include "Dieta.h"
#include "Dietetyk.h"
#include "Grupa_zajeciowa.h"
#include "Karnet.h"
#include "Karnet_miesieczny.h"
#include "Karta_zdrowia.h"
#include "Klient.h"
#include "Recepcjonista.h"
#include "Subskrypcja_.h"
#include "Trener.h"
#include "Trening_personalny.h"
#include "Wejscie_jednorazowe.h"
#include "Wizyta_u_dietetyla.h"
#include "Harmonogram.h"

using namespace std;

vector <Trener*> vector_trener;
vector <Dietetyk*> vector_dietetyk;
vector <Recepcjonista*> vector_recepcjonista;
vector <Klient*> vector_klient;

void recepcjonista(Recepcjonista*zalogowany) 
{
    cout << "Nacisnij konkretny przycisk aby wybrac opcje:" << endl;
    cout << "1.Wyswietl podpisane karnety z klientami." << endl;
    cout << "2.Stworz harmonogram." << endl;
    cout << "3.Modyfikuj harmonogram." << endl;
    cout << "4.Dodaj nowy karnet." << endl;
 
    int a;
    cin >> a;
    
    
}

void trener(Trener*zalogowany)
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
    case 5: 
        cout<<"Twoj grafik na ten tydzien: "<<endl;
        zalogowany->wyswietl_plan_tygodnia_trenera(zalogowany);
    break;
    default:
        break;
    }
}

void dietetyk(Dietetyk*zalogowany)
{
    cout << "Nacisnij konkretny przycisk aby wybrac opcje:" << endl;
    cout << "1.Wyswietl umowione wizyty." << endl;
    cout << "2.Wyswietl karty zdrowia swoich klientow." << endl;
    cout << "3.Zmien swoja dyspozycyjnosc na nastepny miesiac." << endl;
    cout << "4.Wyswietl swoj harmonogram" << endl;
    int a;
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "Twoje wizyty w tym miesiacu: " << endl;
        for (int i = 0; i < zalogowany->_unnamed_Wizyta_u_dietetyka_.size(); i++)
        {
            cout << zalogowany->_unnamed_Wizyta_u_dietetyka_[i]->get_dzien() << " ";
            cout <<"godz:"<< zalogowany->_unnamed_Wizyta_u_dietetyka_[i]->get_godzina() << " ";
            cout << zalogowany->_unnamed_Wizyta_u_dietetyka_[i]->_unnamed_Klient_->get_nazwisko() << endl;
        }
        cout << endl;
        break;

    case 2:
        cout << "Karty zdrowia Twoich klientow: " << endl;
        for (int i = 0; i < zalogowany->_unnamed_Wizyta_u_dietetyka_.size(); i++)
        {
            
            zalogowany->wglad_do_karty_zdrowia(*(zalogowany->_unnamed_Wizyta_u_dietetyka_[i]->_unnamed_Klient_));

        }
        cout << endl;
        break;
    case 3:break;
    case 4: 
        zalogowany->wyswietl_plan_tygodnia_dietetyka(zalogowany);
    break;
    default:
        break;
    }
}
void klient(Klient*zalogowany)
{
    if (zalogowany->get_karnet_miesieczny() == nullptr&&zalogowany->get_subskrypcja()==nullptr&&zalogowany->get_wejscie_jednorazowe()==nullptr)
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
        {
            time_t czas;
            time(&czas);
            tm t;
            localtime_s(&t, &czas);
            cout << "Karnet bedzie aktywny od dnia: " << t.tm_mday<<"."<<t.tm_mon+1<<"."<<t.tm_year+1900<< endl;
            cout<<"do dnia: "<< t.tm_mday-1 << "." << t.tm_mon + 2 << "." << t.tm_year + 1900 << endl;
            Karnet_miesieczny k(t.tm_mday - 1, t.tm_mon + 2, 80);//tworzymy obiekt klasy Karnet_miesiecznny
            zalogowany->set_karnet_miesieczny(&k);//dodajemy obiekt klasy Karnet do Klienta
        }
            break;
        case 2:
        {
            time_t czas;
            time(&czas);
            tm t;
            localtime_s(&t, &czas);
            cout << "Karnet bedzie aktywny dnia: " << t.tm_mday << "." << t.tm_mon + 1 << "." << t.tm_year + 1900 << endl;
            //Wejscie_jednorazowe w(t.tm_wday, t.tm_mon + 1, 20);
            //zalogowany->set_wejscie_jednorazowe(&w);
        }

            break;
        case 3:
        {
            time_t czas;
            time(&czas);
            tm t;
            localtime_s(&t, &czas);
            cout << "Karnet bedzie aktywny od dnia: " << t.tm_mday << "." << t.tm_mon + 1 << "." << t.tm_year + 1900 << endl;
            cout << "Oplata bedzie pobierana " << t.tm_mday << " dnia kazdego miesiaca." << endl;
            //Subskrypcja s(t.tm_wday, t.tm_mon + 1);
            //zalogowany->set_subskrypcja(&s);
            
        }
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
        cout << "5. Dodaj kartę zdrowia." << endl;
        cout << "6. Przedluz waznosc swojego karnetu." << endl;
        cout << "7. Wyswietl cennik." << endl;
        cout << "8. Wyswietl harmonogram prowadzaonych zajec grupowych." << endl;
       
        int a;
        cin >> a;
        switch (a)
        {
        case 1:

            if (zalogowany->get_karnet_miesieczny() != nullptr)
            {
                zalogowany->get_karnet_miesieczny()->wypisz();
            }
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
            if (zalogowany->get_karnet_miesieczny() != nullptr)
                zalogowany->get_karnet_miesieczny()->przedluz();
            break;
        case 7:
            cout << "Koszt karnetu miesiecznego za pierwszy miesiac: 80PLN" << endl;
            cout << "Koszt karnetu miesiecznego za kazdy kolejny miesiac: 70PLN" << endl;
            cout << "Koszt jednorazowego wejscia: 20" << endl;
            cout << "Koszt karnetu odnawianego cyklicznie: 70PLN" << endl;
            cout << "Koszt wizyty u dietetyka: 50" << endl;
            cout << "Koszt treningu personalnego: 60" << endl;
                break;
        case 8: 
            cout<<"Aktualny harmonogram zajec: "<<endl;
            
                break;
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
        if (vector_recepcjonista[i]->get_iD() == id)
        {   
            cout << "Podaj haslo: " << endl;
            string haslo;
            cin >> haslo;
            if (vector_recepcjonista[i]->get_haslo() == haslo)
            {
                cout << "logowanie zokonczoe sukcesem." << endl;
                recepcjonista(vector_recepcjonista[i]);
                break;
                
            }
            else cout << "bledne haslo." << endl;

        }

    }
    for (int i = 0; i < vector_trener.size(); i++)
    {
        if (vector_trener[i]->getID() == id)
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
    srand(time(NULL));
    time_t czas;
    time(&czas);
    tm t;
    localtime_s(&t, &czas);

    Recepcjonista r1("Eryk", "Broda", 1);
    vector_recepcjonista.push_back(&r1);
    Trener t1("Eryk", "Broda", 2);
    vector_trener.push_back(&t1);
    Klient k1("Andrzej", "Giza", 1990);
    vector_klient.push_back(&k1);
    Dietetyk d1("Eryk", "Broda", 3);
    vector_dietetyk.push_back(&d1);

    //system("cls");
    wybor_strefy();
   
    

    
}
