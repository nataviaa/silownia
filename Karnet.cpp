#include <exception>
using namespace std;

#include "Karnet.h"
#include "Recepcjonista.h"
#include "Klient.h"

Karnet::Karnet(bool a, int c,int d, int m, Recepcjonista* recepcjonista, Klient* klient)
{
	_zni¿ka_uczniowska = a;
	_cena = c;
	_dzien = d;
	_miesiac = m;
	_unnamed_Recepcjonista_ = recepcjonista;
	_unnamed_Klient_ = klient;
}

bool Karnet::get_znizka()
{
	return _zni¿ka_uczniowska;
}

int Karnet::get_cena() 
{
	return _cena;
}

int Karnet::get_dzien()
{
	return _dzien;
}

int Karnet::get_miesiac()
{
	return _miesiac;
}