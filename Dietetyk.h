#include <exception>
#include <string>
#include <vector>
using namespace std;

#ifndef __Dietetyk_h__
#define __Dietetyk_h__

#include "Wizyta_u_dietetyla.h"


class Wizyta_u_dietetyka;
class Dietetyk;

class Dietetyk 
{
	string _imie;
	string _nazwisko;
	int _id;
	string _haslo;

public: 
	std::vector<Wizyta_u_dietetyka*> _unnamed_Wizyta_u_dietetyka_;
	
	std::vector <Wizyta_u_dietetyka*> _plan_wizyt_pon;
	
	std::vector <Wizyta_u_dietetyka*> _plan_wizyt_wt;
	
	std::vector <Wizyta_u_dietetyka*> _plan_wizyt_sr;
	
	std::vector <Wizyta_u_dietetyka*> _plan_wizyt_czw;
	
	std::vector <Wizyta_u_dietetyka*> _plan_wizyt_pt;

	Dietetyk(string, string, int);

	int get_id();

	string get_haslo();

	Karta_zdrowia* wglad_do_karty_zdrowia(Klient);

	void dodaj_wizyte(Wizyta_u_dietetyka*);

	Dietetyk dodaj_do_planu_wizyt_dietetyka(Wizyta_u_dietetyka*, Dietetyk);

	Dietetyk wyswietl_plan_tygodnia_dietetyka(Dietetyk);

	

};

#endif
