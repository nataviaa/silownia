#include <exception>
#include <iostream>
using namespace std;

#include "Karnet_miesiêczny.h"
#include "Karnet.h"
#include"Klient.h"


Karnet_miesiêczny::Karnet_miesiêczny(int dzien, int miesiac, int cena)
{
	_dzien = dzien;
	_miesiac = miesiac;
	_cena = cena;
}

void Karnet_miesiêczny::przedluz(Karnet* k, Klient* kl)
{
	//k->_miesiac + 01 = k;
	cout << "Karnet zosta³ przed³uzony do dnia: " << _dzien << ", miesiaca: " << _miesiac << endl;
	cout << "Koszt: " << _cena << "zl"<<endl;
}

void Karnet_miesiêczny::zawies(Karnet* k1, Karnet_miesiêczny karnet_miesiêczny)
{

	cout << "Karnet zosta³ zawieszony do dnia:" << _dzien << ", miesiaca: " << _miesiac << endl;
	cout << "Koszt: " << _cena << "zl"<<endl;
}

