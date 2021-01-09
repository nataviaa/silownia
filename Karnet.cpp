#include <exception>
using namespace std;

#include "Karnet.h"
#include "Recepcjonista.h"

int Karnet::getCena() {
	return _cena;
}

bool Karnet::getZnizka() {
	return _zniżka_uczniowska;
}

