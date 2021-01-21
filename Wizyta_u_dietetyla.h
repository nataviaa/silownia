#include <exception>
#include <vector>
using namespace std;

#ifndef __Wizyta_u_dietetyla_h__
#define __Wizyta_u_dietetyla_h__

// #include "Trener.h"
// #include "Dietetyk.h"
#include "Klient.h"


class Dietetyk;
class Klient;
class Wizyta_u_dietetyka;

class Wizyta_u_dietetyka
{
private: 
	int _dzien;
	double _godzina_wizyty;
	int _cena;
	friend class Dietetyk;
	//friend Dietetyk dodaj_do_planu_wizyt_dietetyka(Wizyta_u_dietetyka&, Dietetyk&);
	//friend Dietetyk Dietetyk:: dodaj_do_planu_wizyt_dietetyka(Wizyta_u_dietetyka &a, Dietetyk &b);
public:
	Dietetyk* _unnamed_Dietetyk_;
	Klient* _unnamed_Klient_;
	Wizyta_u_dietetyka(Wizyta_u_dietetyka*);
	Wizyta_u_dietetyka(int, double, int, Dietetyk*,Klient*);
	int get_dzien();
	double get_godzina();
	int get_cena();
	Dietetyk* get_dietetyk();
	Klient* get_klient();

};

#endif
