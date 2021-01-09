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

class Trener: public Pracownik
{
private:
	int* _dostepnosc_godzinowa;//?

public: 
	//std::vector<Karta_zdrowia*> _unnamed_Karta_zdrowia_;
	
	std::vector<Grupa_zajeciowa*> _unnamed_Grupa_zajeciowa_;
	
	std::vector<Trening_personalny*> _unnamed_Trening_personalny_;

	void wglad_do_karty_zdrowia(Klient*);
	
	Trener(string, string, int);
	
	int getID();
};

#endif
