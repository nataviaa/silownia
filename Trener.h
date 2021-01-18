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
#include "Pracownik.h"

class Karta_zdrowia;
class Grupa_zajeciowa;
class Wizyta_u_dietetyka;
class Trening_personalny;
class Pracownik;
class Trener;

class Trener 
{
private:

	int* _dostepnosc_godzinowa;
	string _imie;
	string _nazwisko;
	int _id;

public: 
	
	std::vector<Grupa_zajeciowa*> _unnamed_Grupa_zajeciowa_;
	
	std::vector<Trening_personalny*> _unnamed_Trening_personalny_;

	Karta_zdrowia* wglad_do_karty_zdrowia(Klient);
	
	Trener(string, string, int);

	string get_imie();
	string get_nazwisko();
	int getID();
	std::vector<Grupa_zajeciowa*> get_grupa();
	std::vector<Trening_personalny*> get_trening_personalny();


	void dodaj_trening(Trening_personalny*);
};

#endif
