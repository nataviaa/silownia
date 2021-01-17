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

void Recepcjonista::dodaj_karnet(Karnet* karnet) 
{
	_unnamed_Karnet_.push_back(karnet);
}

