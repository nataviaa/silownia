#include <exception>
using namespace std;

#ifndef __Karnet_miesi�czny_h__
#define __Karnet_miesi�czny_h__

#include "Karnet.h"

class Karnet;
class Klient;

class Karnet_miesi�czny 
{

private:

	int _dzien;
	int _miesiac;
	int _cena;

	Karnet* _unnamed_Karnet;

public:
	Karnet_miesi�czny(int, int, int);

	void przedluz(Karnet_miesi�czny*, Klient*);
	void zawies(Karnet_miesi�czny*, Klient*);
	void wypisz2();
	int get_miesiac();
	int get_dzien();
	int get_cena();
	Karnet* get_karnet();
};

#endif




