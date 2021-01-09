#include <string>
#ifndef __Dieta_h__
#define __Dieta_h__

class Dieta
{
private: 
	int _kalorycznosc;

public:
	Dieta(int k) :
		_kalorycznoos(k) {}
	
	int get_kalorycznosc();

};

#endif
