#include <exception>
#include <string>
#include <vector>
#include<iostream>
using namespace std;

#ifndef __Trener_h__
#define __Trener_h__

#include "Karta_zdrowia.h"
#include "Grupa_zajeciowa.h"
#include "Trening_personalny.h"
#include "Harmonogram.h"


class Karta_zdrowia;
class Grupa_zajeciowa;
class Wizyta_u_dietetyka;
class Trening_personalny;
class Pracownik;
class Trener;
class Harmonogram;

class Trener 
{
private:

	int* _dostepnosc_godzinowa;
	string _imie;
	string _nazwisko;
	int _id;
	string _haslo;

public: 
	
	std::vector<Grupa_zajeciowa*> _unnamed_Grupa_zajeciowa_;
	
	std::vector<Trening_personalny*> _unnamed_Trening_personalny_;

	std::vector <Trening_personalny*> _plan_wizyt_pon;
	
	std::vector <Trening_personalny*> _plan_wizyt_wt;
	
	std::vector <Trening_personalny*> _plan_wizyt_sr;
	
	std::vector <Trening_personalny*> _plan_wizyt_czw;
	
	std::vector <Trening_personalny*> _plan_wizyt_pt;

	Karta_zdrowia* wglad_do_karty_zdrowia(Klient);

	Trener();
	
	Trener(string, string, int);

	string get_imie();
	string get_nazwisko();
	int getID();
	std::vector<Grupa_zajeciowa*> get_grupa();
	std::vector<Trening_personalny*> get_trening_personalny();
	string get_haslo();


	void dodaj_trening(Trening_personalny*);

	Trener dodaj_do_planu_trenera(Trening_personalny*, Trener*, Harmonogram*);

	Trener wyswietl_plan_tygodnia_trenera(Trener*);
};

#endif
