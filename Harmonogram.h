#include <exception>
#include <vector>
#include <algorithm>
using namespace std;

#ifndef __Harmonogram_h__
#define __Harmonogram_h__

#include "Karnet.h"
#include "Klient.h"
#include "Grupa_zajeciowa.h"
#include "Trener.h"

class Harmonogram;
class Grupa_zajeciowa;
class Trener;


class Harmonogram
{
public:
	string _miesiac;
	
	
	std::vector<Grupa_zajeciowa*> _poniedzialek;
	std::vector<Grupa_zajeciowa*> _wtorek;
	std::vector<Grupa_zajeciowa*> _sroda;
	std::vector<Grupa_zajeciowa*> _czwartek;
	std::vector<Grupa_zajeciowa*> _piatek;





	Harmonogram(string);

	void dodaj_grupe(Grupa_zajeciowa);

	Harmonogram modyfikuj_harmonogram(Grupa_zajeciowa*, Grupa_zajeciowa*, Harmonogram*);

	Harmonogram usun_zajecia(Grupa_zajeciowa*, Harmonogram*);

	void pokaz_harmonogram(Harmonogram*);

	Grupa_zajeciowa wybierz_grupe(Harmonogram*);
	

};
#endif

