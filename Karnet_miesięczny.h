#include <exception>
using namespace std;

#ifndef __Karnet_miesięczny_h__
#define __Karnet_miesięczny_h__

#include "Karnet.h"

// class Karnet;
class Karnet_miesięczny;

class Karnet_miesięczny: public Karnet
{
	
	
	public: void przedluz(Karnet*);
	public: void zawies(Karnet*);
};

#endif
