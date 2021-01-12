#include <exception>
using namespace std;

#include "Karnet_miesięczny.h"
#include "Karnet.h"

Karnet_miesięczny:Karnet_miesięczny(bool znizka, int cena)
{
	_znizka_uczniowska=znizka;
	_cena=cena;
}

void Karnet_miesięczny::przedluz(Karnet* k) 
{
	
}

void Karnet_miesięczny::zawies(Karnet* k1) 
{
	
}
