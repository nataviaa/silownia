#include <exception>
using namespace std;

#ifndef __Karnet_miesięczny_h__
#define __Karnet_miesięczny_h__

#include "Karnet.h"

class Karnet;
class Klient;

class Karnet_miesięczny // : public Karnet
{

private:

	int _dzien;
	int _miesiac;
	int _cena;

	Karnet* _unnamed_Karnet;

public:
	Karnet_miesięczny(int, int, int);

	void przedluz(Karnet*, Klient*kl);
	void zawies(Karnet*, Karnet_miesięczny);
};

#endif




