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

class Karta_zdrowia;
class Wizyta_u_dietetyka;
class Trening_personalny;
class Grupa_zajeciowa;
class Karnet;

class Klient
{
private:
	string _imie;
	string _nazwisko;
	int _rok_urodzenia;
	string _imie_rodzica;
	string _nazwisko_rodzica;
	
	std::vector<Wizyta_u_dietetyka*> _unnamed_Wizyta_u_dietetyka_;
	std::vector < Trening_personalny*> _unnamed_Trening_personalny_;
	Grupa_zajeciowa* _unnamed_Grupa_zajeciowa;
	Karnet* _unnamed_Karnet;

public: 
	Klient(string, string, int);
	Karta_zdrowia* _unnamed_Karta_zdrowia_;
	void zapisz_do_grupy(Grupa_zajeciowa*,Klient);
	void zapisz_do_dietetyka(int, double, int, Dietetyk*,Klient*);
	void zapisz_na_trening(int,double,string,Trener*,Klient*);
	void uaktualnij_dane(string, string, string, string);
	void dodaj_karte_zdrowia(Karta_zdrowia);
	void wglad_w_karte_zdrowia();
	void set_karnet(Karnet*);
	Karta_zdrowia* get_karta_zdrowia();
	string get_imie();
	Grupa_zajeciowa* get_grupa();
	std::vector<Wizyta_u_dietetyka*> get_wizyta();
	std::vector<Trening_personalny*> get_trening();
};

#endif
