#include <exception>
using namespace std;

#ifndef __Karnet_miesięczny_h__
#define __Karnet_miesięczny_h__

#include "Karnet.h"

class Karnet;
class Karnet_miesięczny;

class Karnet_miesięczny: public Karnet
{
   public:
   
	bool _znizka_uczniowska;
	int _cena;
	
   Karnet_miesięczny(bool,int);
	
	 void przedluz(Karnet*);
	 void zawies(Karnet*);
};

#endif
