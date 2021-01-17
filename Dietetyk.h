#include <exception>
#include <string>
#include <vector>
using namespace std;

#ifndef __Dietetyk_h__
#define __Dietetyk_h__

#include "Wizyta_u_dietetyla.h"

class Wizyta_u_dietetyka;

class Dietetyk;

class Dietetyk: 
{
	string _imie;
	string _nazwisko;
	int _id;

public: 
	std::vector<Wizyta_u_dietetyka*> _unnamed_Wizyta_u_dietetyka_;

	Dietetyk(string, string, int);

	int getID();

	Karta_zdrowia* wglad_do_karty_zdrowia(Klient);

	void dodaj_wizyte(Wizyta_u_dietetyka*);

	


};

#endif
