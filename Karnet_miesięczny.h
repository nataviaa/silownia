#include <exception>
using namespace std;

#ifndef __Karnet_miesiêczny_h__
#define __Karnet_miesiêczny_h__

#include "Karnet.h"

class Karnet;
class Klient;

class Karnet_miesiêczny 
{

private:

	int _dzien;
	int _miesiac;
	int _cena;

	Karnet* _unnamed_Karnet;

public:
	Karnet_miesiêczny(int, int, int);

	void przedluz(Karnet_miesiêczny*, Klient*);
	void zawies(Karnet_miesiêczny*, Klient*);
	void wypisz2();
	int get_miesiac();
	int get_dzien();
	int get_cena();
	Karnet* get_karnet();
};

#endif




