#include <exception>


#ifndef __Karnet_h__
#define __Karnet_h__

// #include "Recepcjonista.h"

class Recepcjonista;
class Karnet;
class Klient;

class Karnet
{
private: 
	bool _znizka_uczniowska;
	int _cena;
	int _dzien;
	int _miesiac;

public: 
	Klient* _unnamed_Klient_;
	Recepcjonista* _unnamed_Recepcjonista_;

	Karnet(bool, int,int,int,Recepcjonista*, Klient* );
	bool get_znizka();
	int get_cena();
	int get_dzien();
	int get_miesiac();

};

#endif
