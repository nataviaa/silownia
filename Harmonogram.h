#include <exception>
#include <vector>
using namespace std;

#ifndef __Harmonogram_h__
#define __Harmonogram_h__

#include "Karnet.h"
//#include "Pracownik.h"
#include "Klient.h"
#include "Grupa_zajeciowa.h"

class Harmonogram;
class Grupa_zajeciowa;


class Harmonogram
{
public:
	string _miesiac;
	Grupa_zajeciowa poniedzialek[5];
	Grupa_zajeciowa wtorek[5];
	Grupa_zajeciowa sroda[5];
	Grupa_zajeciowa czwartek[5];
	Grupa_zajeciowa piatek[5];




	Harmonogram(string);

	void stworz_harmonogram(Grupa_zajeciowa, Harmonogram );

	void modyfikuj_harmonogram(Grupa_zajeciowa, Grupa_zajeciowa);

	void usun_zajecia(Grupa_zajeciowa);

};
#endif

