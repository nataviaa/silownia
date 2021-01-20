#include "pch.h"
#include "CppUnitTest.h"
#include "../silownia_projekt/Trener.cpp"
#include "../silownia_projekt/Klient.cpp"
#include "../silownia_projekt/Karta_zdrowia.cpp"
#include "../silownia_projekt/Grupa_zajeciowa.cpp"
#include "../silownia_projekt/Wizyta_u_dietetyla.cpp"
#include "../silownia_projekt/Dietetyk.cpp"
#include "../silownia_projekt/Trening_personalny.cpp"
#include "../silownia_projekt/Wejœcie_jednorazowe.cpp"
#include "../silownia_projekt/Karnet.cpp"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestTrener
{
	TEST_CLASS(TestTrener)
	{
	public:
		
		TEST_METHOD(TestKonstruktora)
		{
			string a = "imie";
			string b = "nazwisko";
			int id = 123;
			Trener t(a, b, id);
			Assert::AreEqual(id, t.getID());
		}
		TEST_METHOD(Test_wglad_do_karty_zdrowia)
		{
			Klient klient("Jan", "Chlanda", 2000);
			Trener trener("Eryk", "Czapla", 1996);
			Karta_zdrowia k1(80, 180, "0-", &klient, &trener);
			klient.dodaj_karte_zdrowia(k1);

			Karta_zdrowia* k2 = trener.wglad_do_karty_zdrowia(klient);

			Assert::IsTrue(k2 = &k1);
		}
	};
}
