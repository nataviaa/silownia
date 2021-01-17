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

void Karnet_miesiêczny::przedluz( Karnet_miesiêczny* k, Klient* k1)
{
	if ( k->get_miesiac()==2 || k->get_miesiac() ==4 || k->get_miesiac() ==6 || k->get_miesiac() ==7 || k->get_miesiac() ==9 || k->get_miesiac() ==11 || k->get_miesiac() == 12)
	{
		_miesiac++;
	}
 
	else if (k->get_miesiac() == 3 || k->get_miesiac() == 5 || k->get_miesiac() == 8 || k->get_miesiac() == 10)
    {

		if(_dzien < 31)
		{
			_miesiac++;
		}

		else
		{
			_dzien = 1;
			_miesiac++;
			_miesiac++;
		}
	}

	else
	{
		if (_dzien < 30)
		{
			_miesiac++;
		}

		else if (_dzien == 30)
		{
			_dzien = 2;
			_miesiac++;
			_miesiac++;
		}

		else
		{
			_dzien = 3;
			_miesiac ++;
			_miesiac++;
		}
	}
		

	cout << "Karnet zostal przedluzony do dnia: " << _dzien << ", miesiaca: " << _miesiac<< endl;
	cout << "Koszt: " << _cena << "zl"<<endl;
}

void Karnet_miesiêczny::zawies(Karnet_miesiêczny* karnet, Klient* k2)
{
	if (karnet->get_dzien()!=NULL && karnet->get_miesiac()!=NULL)
	{
		cout << "Karnet zostal zawieszony." << endl;
	}
}

void Karnet_miesiêczny::wypisz2()
{
	cout << "Karnet byl wazny do dnia: " << _dzien << ", miesiaca: " << _miesiac << endl;
}

int Karnet_miesiêczny::get_miesiac()
{
	return _miesiac;
}
int Karnet_miesiêczny::get_dzien()
{
	return _dzien;
}