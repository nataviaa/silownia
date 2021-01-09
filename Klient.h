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
class Wizyta_u_dietetyla;
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
	
	Wizyta_u_dietetyla* _unnamed_Wizyta_u_dietetyla_;
	Trening_personalny* _unnamed_Trening_personalny_;
	Grupa_zajeciowa* _unnamed_Grupa_zajeciowa;
	Karnet* _unnamed_Karnet;

public: 
	Klient(string, string, int);
	Karta_zdrowia* _unnamed_Karta_zdrowia_;
	void zapisz_do_grupy(Grupa_zajeciowa*);
	void zapisz_do_dietetyka();
	void zapisz_na_trening();

	Klient uaktualnij_dane(string aImie, string aNazwisko, string aImie_rodzica, string aNazwisko_rodzica, char aNumer_telefonu_rodzica);
	void dodaj_karte_zdrowia();
	void wglad_w_karte_zdrowia();
	void set_karnet(Karnet*);
	
	Karta_zdrowia* get_karta_zdrowia();
	string get_imie();
	Grupa_zajeciowa* get_grupa();
};

#endif
