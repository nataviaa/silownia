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
	int _godzina;

public: 
	Trener* _unnamed_Trener_;
	Klient* _unnamed_Klient_;
	Trening_personalny(int, int, string, Trener*, Klient*);

	

	int get_dzien();
	int get_godzina();
	string get_intensywnosc();
	Trener* get_trener();
	Klient* get_klient();
	
};

#endif
