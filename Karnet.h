#include <exception>


#ifndef __Karnet_h__
#define __Karnet_h__


class Karnet;
class Klient;

class Karnet
{
private: 
	bool _zni¿ka_uczniowska;
	int _cena;
	int _dzien;
	int _miesiac;

public: 
	Klient* _unnamed_Klient_;

	Karnet(bool, int,int,int, Klient* );
	bool get_znizka();
	int get_cena();
	int get_dzien();
	int get_miesiac();

};

#endif
