#include <exception>
#include <vector>
using namespace std;


#include "Karnet.h"
//#include "Pracownik.h"
#include "Klient.h"
#include "Grupa_zajeciowa.h"
#include "Harmonogram.h"

Harmonogram::Harmonogram(string miesiac, Trener trener)
{
	_miesiac = miesiac;
	_trener = trener;
};

Harmonogram Harmonogram::stworz_harmonogram(Grupa_zajeciowa gr1,Harmonogram a) {
	if (gr1._dzien_tygodnia == 1) {
		for (int i = 0; i < 5; i++)
		{
			if (a.poniedzialek[i]._godzina <= gr1._godzina) {
				a.poniedzialek[i] = gr1;
				cout << "Zajecia zostaly zapisane na poniedziałek." << endl;
			}
		}
	}
	else if (gr1._dzien_tygodnia == 2) {
		for (int i = 0; i < 5; i++)
		{
			if (a.wtorek[i]._godzina <= gr1._godzina) {
				a.wtorek[i] = gr1;
				cout << "Zajecia zostaly zapisane na wtorek." << endl;
			}
		}
	}
	else if (gr1._dzien_tygodnia == 3) {
		for (int i = 0; i < 5; i++)
		{
			if (a.sroda[i]._godzina <= gr1._godzina) {
				a.sroda[i] = gr1;
				cout << "Zajecia zostaly zapisane na srode." << endl;
			}
		}
	}
	else if (gr1._dzien_tygodnia == 4) {
		for (int i = 0; i < 5; i++)
		{
			if (a.czwartek[i]._godzina <= gr1._godzina) {
				a.czwartek[i] = gr1;
				cout << "Zajecia zostaly zapisane na czwartek." << endl;
			}
		}
	}
	else if (gr1._dzien_tygodnia <= 5) {
		for (int i = 0; i < 5; i++)
		{
			if (a.piatek[i]._godzina <= gr1._godzina) {
				a.piatek[i] = gr1;
				cout << "Zajecia zostaly zapisane na piatek." << endl;
			}
		}
	}
	return a;
}

Harmonogram Harmonogram::modyfikuj_harmonogram(Grupa_zajeciowa gr1, Grupa_zajeciowa gr2, Harmonogram a) {	   //gr1 grupa modyfikowana, gr2 grupa modyfikujaca
	if (gr1._dzien_tygodnia == 1) {
		for (int i = 0; i < 5; i++)
		{
			if (a.poniedzialek[i]._godzina <= gr1._godzina) {
				gr1=gr2;
				cout << "Zajecia zostaly zmienione." << endl;
			}
		}
	}
	else if (gr1._dzien_tygodnia == 2) {
		for (int i = 0; i < 5; i++)
		{
			if (a.wtorek[i]._godzina <= gr1._godzina) {
				gr1=gr2;
				cout << "Zajecia zostaly zmienione." << endl;
			}
		}
	}
	else if (gr1._dzien_tygodnia == 3) {
		for (int i = 0; i < 5; i++)
		{
			if (a.sroda[i]._godzina <= gr1._godzina) {
				gr1=gr2;
				cout << "Zajecia zostaly zmienione." << endl;
			}
		}
	}
	else if (gr1._dzien_tygodnia == 4) {
		for (int i = 0; i < 5; i++)
		{
			if (a.czwartek[i]._godzina <= gr1._godzina) {
				gr1=gr2;
				cout << "Zajecia zostaly zmienione." << endl;
			}
		}
	}
	else if (gr1._dzien_tygodnia == 5) {
		for (int i = 0; i < 5; i++)
		{
			if (a.piatek[i]._godzina <= gr1._godzina) {
				gr1=gr2;
				cout << "Zajecia zostaly zmienione." << endl;
			}
		}
	}

	return a;

};

Harmonogram Harmonogram::usun_zajecia(Grupa_zajeciowa gr1, Harmonogram a) {
	
	Grupa_zajeciowa gr2(0, 0, 0, 0, NULL);
	
	if (gr1._dzien_tygodnia == 1) {
		for (int i = 0; i < 5; i++)
		{
			if (a.poniedzialek[i]._godzina <= gr1._godzina) {
				gr1 = gr2;
				cout << "Zajecia zostaly zmienione." << endl;
			}
		}
	}
	else if (gr1._dzien_tygodnia == 2) {
		for (int i = 0; i < 5; i++)
		{
			if (a.wtorek[i]._godzina <= gr1._godzina) {
				gr1 = gr2;
				cout << "Zajecia zostaly zmienione." << endl;
			}
		}
	}
	else if (gr1._dzien_tygodnia == 3) {
		for (int i = 0; i < 5; i++)
		{
			if (a.sroda[i]._godzina <= gr1._godzina) {
				gr1 = gr2;
				cout << "Zajecia zostaly zmienione." << endl;
			}
		}
	}
	else if (gr1._dzien_tygodnia == 4) {
		for (int i = 0; i < 5; i++)
		{
			if (a.czwartek[i]._godzina <= gr1._godzina) {
				gr1 = gr2;
				cout << "Zajecia zostaly zmienione." << endl;
			}
		}
	}
	else if (gr1._dzien_tygodnia == 5) {
		for (int i = 0; i < 5; i++)
		{
			if (a.piatek[i]._godzina <= gr1._godzina) {
				gr1 = gr2;
				cout << "Zajecia zostaly zmienione." << endl;
			}
		}
	}
	return a;
};
void Harmonogram::pokaz_harmonogram(Harmonogram a) {
	cout << "PONIEDZIALEK" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << a.poniedzialek[i]._rodzaj_zajec << " godzina: " << a.poniedzialek[i]._godzina << " sala: " << a.poniedzialek[i]._sala << endl;
	}
	cout << "WTOREK" << endl;
	for (int j = 0; j < 5; j++)
	{
		cout << a.wtorek[j]._rodzaj_zajec << " godzina: " << a.wtorek[j]._godzina << " sala: " << a.wtorek[j]._sala << endl;
	}
	cout << "SRODA" << endl;
	for (int k = 0; k < 5; k++)
	{
		cout << a.wtorek[k]._rodzaj_zajec << " godzina: " << a.wtorek[k]._godzina << " sala: " << a.wtorek[k]._sala << endl;
	}
	cout << "CZWARTEK" << endl;
	for (int x = 0; x < 5; x++)
	{
		cout << a.wtorek[x]._rodzaj_zajec << " godzina: " << a.wtorek[x]._godzina << " sala: " << a.wtorek[x]._sala << endl;
	}
	cout << "PIATEK" << endl;
	for (int w = 0; w < 5; w++)
	{
		cout << a.wtorek[w]._rodzaj_zajec << " godzina: " << a.wtorek[w]._godzina << " sala: " << a.wtorek[w]._sala << endl;
	}
};
