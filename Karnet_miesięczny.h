#include <exception>
using namespace std;

#ifndef __Karnet_miesięczny_h__
#define __Karnet_miesięczny_h__

#include "Karnet.h"

class Karnet;
class Klient;

class Karnet_miesięczny 
{

private:

	int _dzien;
	int _miesiac;
	int _cena;

	Karnet* _unnamed_Karnet;

public:
	Karnet_miesięczny(int, int, int);

	void przedluz(Karnet_miesięczny*, Klient*);
	void zawies(Karnet_miesięczny*, Klient*);
	void wypisz2();
	int get_miesiac();
	int get_dzien();
};

#endif




