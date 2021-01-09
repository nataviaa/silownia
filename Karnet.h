#include <exception>


#ifndef __Karnet_h__
#define __Karnet_h__

// #include "Recepcjonista.h"

class Recepcjonista;
class Karnet;

class Karnet
{
private: 
	bool _znizka_uczniowska;
	int _cena;
public: 
	
	Karnet(bool z, int c) :
		_znizka_uczniowska(z), _cena(c) {}
	
};

#endif
