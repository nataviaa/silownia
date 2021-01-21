#include <exception>
#include <vector>
#include <string>
using namespace std;



#include "Klient.h"
#include "Grupa_zajeciowa.h"
#include "Harmonogram.h"
#include "Trener.h"

Harmonogram::Harmonogram(string miesiac)
{
	_miesiac = miesiac;
	
};

void Harmonogram::dodaj_grupe(Grupa_zajeciowa grupa) {

	int dzien = grupa._dzien_tygodnia;
	switch (dzien)
	{
	case 1:
		_poniedzialek.push_back(&grupa);
		break;
	case 2:
		_wtorek.push_back(&grupa);
		break;
	case 3:
		_sroda.push_back(&grupa);
		break;
	case 4: 
		_czwartek.push_back(&grupa);
		break;
	case 5: 
		_piatek.push_back(&grupa);
		break;
	}
}

Harmonogram Harmonogram::modyfikuj_harmonogram(Grupa_zajeciowa* gr1, Grupa_zajeciowa* gr2, Harmonogram* a) {	   //gr1 grupa modyfikowana, gr2 grupa modyfikujaca
	if (gr1->_dzien_tygodnia == 1) {
		for (int i = 0; i < 5; i++)
		{
			if (a->_poniedzialek[i]->_godzina <= gr1->_godzina) {
				gr1=gr2;
				cout << "Zajecia zostaly zmienione->" << endl;
			}
		}
	}
	else if (gr1->_dzien_tygodnia == 2) {
		for (int i = 0; i < 5; i++)
		{
			if (a->_wtorek[i]->_godzina <= gr1->_godzina) {
				gr1=gr2;
				cout << "Zajecia zostaly zmienione->" << endl;
			}
		}
	}
	else if (gr1->_dzien_tygodnia == 3) {
		for (int i = 0; i < 5; i++)
		{
			if (a->_sroda[i]->_godzina <= gr1->_godzina) {
				gr1=gr2;
				cout << "Zajecia zostaly zmienione->" << endl;
			}
		}
	}
	else if (gr1->_dzien_tygodnia == 4) {
		for (int i = 0; i < 5; i++)
		{
			if (a->_czwartek[i]->_godzina <= gr1->_godzina) {
				gr1=gr2;
				cout << "Zajecia zostaly zmienione->" << endl;
			}
		}
	}
	else if (gr1->_dzien_tygodnia == 5) {
		for (int i = 0; i < 5; i++)
		{
			if (a->_piatek[i]->_godzina <= gr1->_godzina) {
				gr1=gr2;
				cout << "Zajecia zostaly zmienione->" << endl;
			}
		}
	}

	return *a;

};

Harmonogram Harmonogram::usun_zajecia(Grupa_zajeciowa* gr1, Harmonogram* a) {
	
	Grupa_zajeciowa *gr2(NULL);
	
	if (gr1->_dzien_tygodnia == 1) {
		for (int i = 0; i < 5; i++)
		{
			if (a->_poniedzialek[i]->_godzina <= gr1->_godzina) {
				gr1 = gr2;
				cout << "Zajecia zostaly usuniete->" << endl;
			}
		}
	}
	else if (gr1->_dzien_tygodnia == 2) {
		for (int i = 0; i < 5; i++)
		{
			if (a->_wtorek[i]->_godzina <= gr1->_godzina) {
				gr1 = gr2;
				cout << "Zajecia zostaly usuniete->" << endl;
			}
		}
	}
	else if (gr1->_dzien_tygodnia == 3) {
		for (int i = 0; i < 5; i++)
		{
			if (a->_sroda[i]->_godzina <= gr1->_godzina) {
				gr1 = gr2;
				cout << "Zajecia zostaly usuniete->" << endl;
			}
		}
	}
	else if (gr1->_dzien_tygodnia == 4) {
		for (int i = 0; i < 5; i++)
		{
			if (a->_czwartek[i]->_godzina <= gr1->_godzina) {
				gr1 = gr2;
				cout << "Zajecia zostaly usuniete->" << endl;
			}
		}
	}
	else if (gr1->_dzien_tygodnia == 5) {
		for (int i = 0; i < 5; i++)
		{
			if (a->_piatek[i]->_godzina <= gr1->_godzina) {
				gr1 = gr2;
				cout << "Zajecia zostaly usuniete->" << endl;
			}
		}
	}
	return *a;
};

void Harmonogram::pokaz_harmonogram(Harmonogram* a) {
	cout << "Poniedzialek: " << endl;
	for (int i = 0; i < a->_poniedzialek.size(); i++)
	{
		cout << "Godzina: " << a->_poniedzialek[i]->get_godzina() << " Rodzaj zajec: " << a->_poniedzialek[i]->get_rodzaj() <<" Sala: "<< a->_poniedzialek[i]->_sala << endl;
	}
	cout << "Wtorek: " << endl;
	for (int i = 0; i < a->_wtorek.size(); i++)
	{
		cout << "Godzina: " << a->_wtorek[i]->get_godzina() << " Rodzaj zajec: " << a->_wtorek[i]->get_rodzaj() << " Sala: " << a->_wtorek[i]->_sala << endl;
	}
	cout << "Sroda: " << endl;
	for (int i = 0; i < a->_sroda.size(); i++)
	{
		cout << "Godzina: " << a->_sroda[i]->get_godzina() << " Rodzaj zajec: " << a->_sroda[i]->get_rodzaj() << " Sala: " << a->_sroda[i]->_sala << endl;
	}
	cout << "Czwartek: " << endl;
	for (int i = 0; i < a->_czwartek.size(); i++)
	{
		cout << "Godzina: " << a->_czwartek[i]->get_godzina() << "Imie: " << a->_czwartek[i]->get_rodzaj() << "Sala: " << a->_czwartek[i]->_sala << endl;
	}
	cout << "Piatek: " << endl;
	for (int i = 0; i < a->_piatek.size(); i++)
	{
		cout << "Godzina: " << a->_piatek[i]->get_godzina() << "Imie: " << a->_piatek[i]->get_rodzaj() << "Sala: " << a->_piatek[i]->_sala << endl;
	}

	
}

Grupa_zajeciowa Harmonogram::wybierz_grupe(Harmonogram* a) {
	a->pokaz_harmonogram(a);
	cout << "Aby zapisac sie na zajecia: " << endl;

	cout << "Wybierz dzień zajęc: " << endl;
	cout << "1. Poniedziałek" << endl;
	cout << "2. Wtorek " << endl;
	cout << "3. Sroda" << endl;
	cout << "4. Czwartek" << endl;
	cout << "5. Piatek" << endl;
	int c;
	cin >> c;
	cout << endl;
	cout << "Wybierz grupe zajeciowa: " << endl;
	cout << "1. Yoga" << endl;
	cout << "2. K-box" << endl;
	cout << "3. Box: " << endl;
	cout << "4. MMA: " << endl;
	cout << "5. Aerobik: " << endl;
	int b;
	cin >> b;
	cout << endl;
	if (c == 1)
	{
		if (b == 1)
		{
			string zajecia = "Yoga";
			for (int i = 0; i < a->_poniedzialek.size(); i++)
			{
				if (a->_poniedzialek[i]->_rodzaj_zajec == zajecia)
				{
					return *a->_poniedzialek[i];
				}
			}
		}
		if (b == 2)
		{
			string zajecia = "K-box";
			for (int i = 0; i < a->_poniedzialek.size(); i++)
			{
				if (a->_poniedzialek[i]->_rodzaj_zajec == zajecia)
				{
					return *a->_poniedzialek[i];
				}
			}
		}
		if (b == 3)
		{
			string zajecia = "Box";
			for (int i = 0; i < a->_poniedzialek.size(); i++)
			{
				if (a->_poniedzialek[i]->_rodzaj_zajec == zajecia)
				{
					return *a->_poniedzialek[i];
				}
			}
		}
		if (b == 4)
		{
			string zajecia = "MMA";
			for (int i = 0; i < a->_poniedzialek.size(); i++)
			{
				if (a->_poniedzialek[i]->_rodzaj_zajec == zajecia)
				{
					return *a->_poniedzialek[i];
				}
			}
		}
		if (b == 5)
		{
			string zajecia = "Aerobik";
			for (int i = 0; i < a->_poniedzialek.size(); i++)
			{
				if (a->_poniedzialek[i]->_rodzaj_zajec == zajecia)
				{
					return *a->_poniedzialek[i];
				}
			}
		}
	}

	if (c == 2)
	{
		if (b == 1)
		{
			string zajecia = "Yoga";
			for (int i = 0; i < a->_wtorek.size(); i++)
			{
				if (a->_wtorek[i]->_rodzaj_zajec == zajecia)
				{
					return *a->_wtorek[i];
				}
			}
		}
		if (b == 2)
		{
			string zajecia = "K-box";
			for (int i = 0; i < a->_wtorek.size(); i++)
			{
				if (a->_wtorek[i]->_rodzaj_zajec == zajecia)
				{
					return *a->_wtorek[i];
				}
			}
		}
		if (b == 3)
		{
			string zajecia = "Box";
			for (int i = 0; i < a->_wtorek.size(); i++)
			{
				if (a->_wtorek[i]->_rodzaj_zajec == zajecia)
				{
					return *a->_wtorek[i];
				}
			}
		}
		if (b == 4)
		{
			string zajecia = "MMA";
			for (int i = 0; i < a->_wtorek.size(); i++)
			{
				if (a->_wtorek[i]->_rodzaj_zajec == zajecia)
				{
					return *a->_wtorek[i];
				}
			}
		}
		if (b == 5)
		{
			string zajecia = "Aerobik";
			for (int i = 0; i < a->_wtorek.size(); i++)
			{
				if (a->_wtorek[i]->_rodzaj_zajec == zajecia)
				{
					return *a->_wtorek[i];
				}
			}
		}
	}

	if (c == 3)
	{
		if (b == 1)
		{
			string zajecia = "Yoga";
			for (int i = 0; i < a->_sroda.size(); i++)
			{
				if (a->_sroda[i]->_rodzaj_zajec == zajecia)
				{
					return *a->_sroda[i];
				}
			}
		}
		if (b == 2)
		{
			string zajecia = "K-box";
			for (int i = 0; i < a->_sroda.size(); i++)
			{
				if (a->_sroda[i]->_rodzaj_zajec == zajecia)
				{
					return *a->_sroda[i];
				}
			}
		}
		if (b == 3)
		{
			string zajecia = "Box";
			for (int i = 0; i < a->_sroda.size(); i++)
			{
				if (a->_sroda[i]->_rodzaj_zajec == zajecia)
				{
					return *a->_sroda[i];
				}
			}
		}
		if (b == 4)
		{
			string zajecia = "MMA";
			for (int i = 0; i < a->_sroda.size(); i++)
			{
				if (a->_sroda[i]->_rodzaj_zajec == zajecia)
				{
					return *a->_sroda[i];
				}
			}
		}
		if (b == 5)
		{
			string zajecia = "Aerobik";
			for (int i = 0; i < a->_sroda.size(); i++)
			{
				if (a->_sroda[i]->_rodzaj_zajec == zajecia)
				{
					return *a->_sroda[i];
				}
			}
		}
	}

	if (c == 4)
	{
		if (b == 1)
		{
			string zajecia = "Yoga";
			for (int i = 0; i < a->_czwartek.size(); i++)
			{
				if (a->_czwartek[i]->_rodzaj_zajec == zajecia)
				{
					return *a->_czwartek[i];
				}
			}
		}
		if (b == 2)
		{
			string zajecia = "K-box";
			for (int i = 0; i < a->_czwartek.size(); i++)
			{
				if (a->_czwartek[i]->_rodzaj_zajec == zajecia)
				{
					return *a->_czwartek[i];
				}
			}
		}
		if (b == 3)
		{
			string zajecia = "Box";
			for (int i = 0; i < a->_czwartek.size(); i++)
			{
				if (a->_czwartek[i]->_rodzaj_zajec == zajecia)
				{
					return *a->_czwartek[i];
				}
			}
		}
		if (b == 4)
		{
			string zajecia = "MMA";
			for (int i = 0; i < a->_czwartek.size(); i++)
			{
				if (a->_czwartek[i]->_rodzaj_zajec == zajecia)
				{
					return *a->_czwartek[i];
				}
			}
		}
		if (b == 5)
		{
			string zajecia = "Aerobik";
			for (int i = 0; i < a->_czwartek.size(); i++)
			{
				if (a->_czwartek[i]->_rodzaj_zajec == zajecia)
				{
					return *a->_czwartek[i];
				}
			}
		}
	}

	if (c == 5)
	{
		if (b == 1)
		{
			string zajecia = "Yoga";
			for (int i = 0; i < a->_piatek.size(); i++)
			{
				if (a->_piatek[i]->_rodzaj_zajec == zajecia)
				{
					return *a->_piatek[i];
				}
			}
		}
		if (b == 2)
		{
			string zajecia = "K-box";
			for (int i = 0; i < a->_piatek.size(); i++)
			{
				if (a->_piatek[i]->_rodzaj_zajec == zajecia)
				{
					return *a->_piatek[i];
				}
			}
		}
		if (b == 3)
		{
			string zajecia = "Box";
			for (int i = 0; i < a->_piatek.size(); i++)
			{
				if (a->_piatek[i]->_rodzaj_zajec == zajecia)
				{
					return *a->_piatek[i];
				}
			}
		}
		if (b == 4)
		{
			string zajecia = "MMA";
			for (int i = 0; i < a->_piatek.size(); i++)
			{
				if (a->_piatek[i]->_rodzaj_zajec == zajecia)
				{
					return *a->_piatek[i];
				}
			}
		}
		if (b == 5)
		{
			string zajecia = "Aerobik";
			for (int i = 0; i < a->_piatek.size(); i++)
			{
				if (a->_piatek[i]->_rodzaj_zajec == zajecia)
				{
					return *a->_piatek[i];
				}
			}
		}
	}

}