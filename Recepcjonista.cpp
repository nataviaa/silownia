#include <exception>
#include <vector>
using namespace std;

#include "Recepcjonista.h"
#include "Karnet.h"
#include "Pracownik.h"
#include "Klient.h"

Recepcjonista::Recepcjonista(string imie, string nazwisko, int i) {
	_imie = imie;
	_nazwisko = nazwisko;
	_iD = i;
}
void Recepcjonista::archiwizuj_potwierdzenia_przelewu(Karnet k) {
	cout<<"Karnet zostal wysłany do ksiegowosci"<<endl;
}

void Recepcjonista::dodaj_karnet(Karnet* k1, Klient* k2) {
	k2->set_karnet(k1);
	cout << "Karnet został dodany." << endl;
}

void Recepcjonista::pokaz_harmonogram(Harmonogram a) {
	cout << "PONIEDZIALEK" << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << a.poniedzialek[i]._rodzaj_zajec << " godzina: " << a.poniedzialek[i]._godzina << " sala: " <<a.poniedzialek[i]._sala << endl;
		}
	cout << "WTOREK" << endl;
		for(int j=0;j<5;j++)
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

}
