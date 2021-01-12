#include <exception>
using namespace std;

#ifndef __Subskrypcja__h__
#define __Subskrypcja__h__

#include "Karnet.h"

class Karnet;
class Subskrypcja_;

class Subskrypcja_: public Karnet
{
private: 
	int _czas_trwania;

public: 
	void przedloz(Karnet*);
	void zawies(Karnet*);
};

#endif
