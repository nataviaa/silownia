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
	Trener* _trener;
	Grupa_zajeciowa poniedzialek[5];
	Grupa_zajeciowa wtorek[5];
	Grupa_zajeciowa sroda[5];
	Grupa_zajeciowa czwartek[5];
	Grupa_zajeciowa piatek[5];




	Harmonogram(string, Trener);

	Harmonogram stworz_harmonogram(Grupa_zajeciowa, Harmonogram );

	Harmonogram modyfikuj_harmonogram(Grupa_zajeciowa, Grupa_zajeciowa, Harmonogram);

	Harmonogram usun_zajecia(Grupa_zajeciowa, Harmonogram);

	

};
#endif

