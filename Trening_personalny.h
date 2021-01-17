#include <vector>
#include <iostream>
#include <string>
using namespace std;

#ifndef __Trening_personalny_h__
#define __Trening_personalny_h__

#include "Trener.h"
#include "Klient.h"

class Trener;
class Klient;
class Trening_personalny;

class Trening_personalny
{
private: 
	string _intensywnosc;
	int _dzieñ;
	double _godzina;

public: 
	Trener* _unnamed_Trener_;
	Klient* _unnamed_Klient_;
	Trening_personalny(int, double, string, Trener*, Klient*);

	int get_dzien();
	double get_godzina();
	string get_intensywnosc();
	
};

#endif
