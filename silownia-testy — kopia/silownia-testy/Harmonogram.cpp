#include <exception>
#include <vector>
using namespace std;


#include "Karnet.h"
//#include "Pracownik->h"
#include "Klient.h"
#include "Grupa_zajeciowa.h"
#include "Harmonogram.h"
#include "Trener.h"

Harmonogram::Harmonogram(string miesiac, Trener* trener)
{
	_miesiac = miesiac;
	_trener = trener;
};

Harmonogram Harmonogram::stworz_harmonogram(Grupa_zajeciowa* gr1,Harmonogram* a) {
	if (gr1->_dzien_tygodnia == 1) {
		for (int i = 0; i < 5; i++)
		{
			if (a->_poniedzialek[i]->_godzina <= gr1->_godzina) {
				a->_poniedzialek[i] = gr1;
				cout << "Zajecia zostaly zapisane na poniedziałek->" << endl;
			}
		}
	}
	else if (gr1->_dzien_tygodnia == 2) {
		for (int i = 0; i < 5; i++)
		{
			if (a->_wtorek[i]->_godzina <= gr1->_godzina) {
				a->_wtorek[i] = gr1;
				cout << "Zajecia zostaly zapisane na wtorek->" << endl;
			}
		}
	}
	else if (gr1->_dzien_tygodnia == 3) {
		for (int i = 0; i < 5; i++)
		{
			if (a->_sroda[i]->_godzina <= gr1->_godzina) {
				a->_sroda[i] = gr1;
				cout << "Zajecia zostaly zapisane na srode->" << endl;
			}
		}
	}
	else if (gr1->_dzien_tygodnia == 4) {
		for (int i = 0; i < 5; i++)
		{
			if (a->_czwartek[i]->_godzina <= gr1->_godzina) {
				a->_czwartek[i] = gr1;
				cout << "Zajecia zostaly zapisane na czwartek->" << endl;
			}
		}
	}
	else if (gr1->_dzien_tygodnia <= 5) {
		for (int i = 0; i < 5; i++)
		{
			if (a->_piatek[i]->_godzina <= gr1->_godzina) {
				a->_piatek[i] = gr1;
				cout << "Zajecia zostaly zapisane na piatek->" << endl;
			}
		}
	}
	return *a;
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
