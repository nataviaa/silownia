#include <exception>
#include <string>
#include <vector>
using namespace std;


#ifndef __Klient_h__
#define __Klient_h__

#include "Karta_zdrowia.h"
#include "Wizyta_u_dietetyla.h"
#include "Trening_personalny.h"
#include "Grupa_zajeciowa.h"
#include "Karnet.h"
#include "Karnet_miesieczny.h"
#include "Wejscie_jednorazowe.h"
#include "Subskrypcja_.h"
#include "Harmonogram.h"

class Karta_zdrowia;
class Wizyta_u_dietetyka;
class Trening_personalny;
class Grupa_zajeciowa;
class Karnet;
class Karnet_miesieczny;
class Wejscie_jednorazowe;
class Subskrypcja;
class Harmonogram;

class Klient
{
private:
	string _imie;
	string _nazwisko;
	int _rok_urodzenia;
	string _imie_rodzica;
	string _nazwisko_rodzica;
	string _haslo;
	std::vector<Wizyta_u_dietetyka*> _unnamed_Wizyta_u_dietetyka_;
	std::vector < Trening_personalny*> _unnamed_Trening_personalny_;
	Grupa_zajeciowa* _unnamed_Grupa_zajeciowa;
	Karnet_miesieczny* _unnamed_Karnet_miesieczny;
	Wejscie_jednorazowe* _unnamed_Wejscie_jednorazowe;
	Subskrypcja* _unnamed_Subskrypcja;


public: 
	Klient(string, string, int);
	Karta_zdrowia* _unnamed_Karta_zdrowia_;
	void zapisz_do_grupy(Grupa_zajeciowa*,Klient);
	void zapisz_do_dietetyka(int, double, int, Dietetyk*,Klient*);
	void zapisz_na_trening(int,double,string,Trener*,Klient*,Harmonogram*);
	void uaktualnij_dane(string, string, string, string);
	void dodaj_karte_zdrowia(Karta_zdrowia);
	void wglad_w_karte_zdrowia();
	Karta_zdrowia* get_karta_zdrowia();
	string get_imie();
	string get_haslo();
	string get_nazwisko();
	Grupa_zajeciowa* get_grupa();
	Karnet_miesieczny* get_karnet_miesieczny();
	Wejscie_jednorazowe* get_wejscie_jednorazowe();
	Subskrypcja* get_subskrypcja();
	std::vector<Wizyta_u_dietetyka*> get_wizyta();
	std::vector<Trening_personalny*> get_trening();
	void set_karnet_miesieczny(Karnet_miesieczny*);
	void set_wejscie_jednorazowe(Wejscie_jednorazowe*);
	void set_subskrypcja(Subskrypcja*);
};

#endif
