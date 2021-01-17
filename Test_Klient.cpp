#include "pch.h"
#include "CppUnitTest.h"
#include "../silownia_projekt/Klient.cpp"
#include "../silownia_projekt/Grupa_zajeciowa.cpp"
#include "../silownia_projekt/Karta_zdrowia.cpp"
#include "../silownia_projekt/Trener.cpp"
#include "../silownia_projekt/Wizyta_u_dietetyla.cpp"
#include "../silownia_projekt/Dietetyk.cpp"
#include "../silownia_projekt/Trening_personalny.cpp"
#include "../silownia_projekt/Karnet.cpp"
#include "../silownia_projekt/Wejœcie_jednorazowe.cpp"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestKlient
{
	TEST_CLASS(TestKlient)
	{
	public:
		
		TEST_METHOD(TestKonstruktora)
		{
			string a = "imie";
			string b = "nazwisko";
			int c = 2000;

			Klient k(a, b, c);

			Assert::AreEqual(a, k.get_imie());

		}
		TEST_METHOD(Test_zapis_do_grupy)
		{
			Klient klient("Alicja", "Chmura", 2000);
			Grupa_zajeciowa grupa(10.5, 10, 1, 6, "Yoga");

			klient.zapisz_do_grupy(&grupa, klient);
			Grupa_zajeciowa* grupa_test = klient.get_grupa();

			Assert::IsTrue(grupa_test = &grupa);
			
		}
		TEST_METHOD(Test_dodaj_karte_zdrowia)
		{
			Klient klient("Alicja", "Chmura", 2000);
			Trener trener("Eryk", "Czaja", 1);
			Karta_zdrowia karta(80, 180, "0+", &klient, &trener);

			klient.dodaj_karte_zdrowia(karta);
			Karta_zdrowia* karta_test = klient.get_karta_zdrowia();
			
			Assert::IsTrue(karta_test = &karta);

		}
		TEST_METHOD(Test_zapis_do_dietetyka)
		{
			Klient klient("Alicja", "Chmura", 2000);
			Dietetyk dietetyk("Eryk", "Czaja", 2);


			klient.zapisz_do_dietetyka(2, 10, 30, &dietetyk, &klient);
			Wizyta_u_dietetyka* wizyta = klient.get_wizyta()[0];
			Wizyta_u_dietetyka* wizyta_test = dietetyk._unnamed_Wizyta_u_dietetyka_[0];

			Assert::IsTrue(wizyta_test = wizyta);
		}
		TEST_METHOD(Test_zapis_na_trening)
		{
			Klient klient("Alicja", "Chmura", 2000);
			Trener trener("Eryk", "Czaja", 2);

			klient.zapisz_na_trening(2, 10, "Crosfit", &trener, &klient);
			Trening_personalny* trening = klient.get_trening()[0];
			Trening_personalny* trening_test = trener._unnamed_Trening_personalny_[0];

			Assert::IsTrue(trening_test = trening);
		}


		
	};
}
