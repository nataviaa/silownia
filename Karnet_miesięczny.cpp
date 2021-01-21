#include <exception>
#include <iostream>
using namespace std;

#include "Karnet_miesieczny.h"
#include "Karnet.h"
#include"Klient.h"


Karnet_miesieczny::Karnet_miesieczny(int dzien, int miesiac, int cena)
{
	_dzien = dzien;
	_miesiac = miesiac;
	_cena = cena;
}

void Karnet_miesieczny::przedluz()
{
	if (_miesiac == 2 || _miesiac == 4 || _miesiac == 6 || _miesiac == 9 || _miesiac == 11 )
	{
		_miesiac++;
	}

	else if (_miesiac == 1|| _miesiac == 3 || _miesiac == 5 || _miesiac == 7|| _miesiac == 8 || _miesiac == 10|| _miesiac == 12)
	{

		if (1<_dzien && _dzien <= 31)
		{
			_miesiac++;
			_dzien--;
		}

		else if(_dzien==1)
		{
			_dzien = 31;
			
		}
		
	}

	


	cout << "Karnet zostal przedluzony do dnia: " << _dzien << ". " << _miesiac << endl;
	cout << "Koszt: " << _cena << "zl" << endl;
}

void Karnet_miesieczny::zawies(Karnet_miesieczny* karnet, Klient* k2)
{
	if (karnet->_dzien == NULL && karnet->_miesiac == NULL)
	{
		cout << "Karnet zostal zawieszony." << endl;
		//cout << "Karnet zostal zawieszony do dnia: " << _dzien << ", miesiaca: " << _miesiac << endl;
		//cout << "Koszt: " << _cena << "zl" << endl;

	}

	else {
		cout << "Karnet nie zostal zawieszony." << endl;

	}
}

	void Karnet_miesieczny::wypisz()
	{
		cout << "Karnet byl wazny do dnia: " << _dzien << ", miesiaca: " << _miesiac << endl;
	}

	int Karnet_miesieczny::get_miesiac()
	{
		return _miesiac;
	}
	int Karnet_miesieczny::get_dzien()
	{
		return _dzien;
	}
	int Karnet_miesieczny::get_cena()
	{
		return _cena;
	}
	


