#include <exception>
#include <iostream>
using namespace std;

#include "Karnet_miesiêczny.h"
#include "Karnet.h"
#include"Klient.h"



Karnet_miesi�czny::Karnet_miesi�czny(int dzien, int miesiac, int cena)
{
	_dzien = dzien;
	_miesiac = miesiac;
	_cena = cena;
}

void Karnet_miesi�czny::przedluz(Karnet* k, Klient* kl)
{
	//k->_miesiac + 01 = k;
	cout << "Karnet zostal przedluzony do dnia: " << _dzien << ", miesiaca: " << _miesiac << endl;
	cout << "Koszt: " << _cena << "zl"<<endl;
}

void Karnet_miesi�czny::zawies(Karnet* k1, Karnet_miesi�czny karnet_miesi�czny)
{

	cout << "Karnet zosta� zawieszony do dnia:" << _dzien << ", miesiaca: " << _miesiac << endl;
	cout << "Koszt: " << _cena << "zl"<<endl;

}

void Karnet_miesięczny::zawies(Karnet* k1) 
{
	
}
