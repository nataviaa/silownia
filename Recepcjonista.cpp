#include <exception>
#include <vector>
using namespace std;

#include "Recepcjonista.h"
#include "Karnet.h"
#include "Pracownik.h"
#include "Klient.h"

Recepcjonista::Recepcjonista(string imie, string nazwisko, int i) //konstruktor w ktorym automatycznie generowane jest haslo Recepcjoniscie
{
	_imie = imie;
	_nazwisko = nazwisko;
	_iD = i;
	char chars[] = "qwertyuiopasdfghjklzxcvbnm1234567890";
	for (int i = 0; i < 6; i++)
	{
		_haslo += chars[rand() % 37];
	}
	cout << "Haslo zostalo automatycznie wygenerowane: " << _haslo << endl;
}
void Recepcjonista::archiwizuj_potwierdzenia_przelewu(Karnet k) //metoda archiwizujaca potwierdzenie przelewu za Karnet 
{
	cout<<"Karnet zostal wysłany do ksiegowosci"<<endl;
}

void Recepcjonista::dodaj_karnet(Karnet* karnet) //metoda dodajaca karnet 
{
	_unnamed_Karnet_.push_back(karnet);
}

string Recepcjonista::get_imie() {
	return _imie;
}
string Recepcjonista::get_nazwisko() {
	return _nazwisko;
}
int Recepcjonista::get_iD() {
	return _iD;
}
string Recepcjonista::get_haslo() {
	return _haslo;
}
