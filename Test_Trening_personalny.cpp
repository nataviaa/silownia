#include "pch.h"
#include "CppUnitTest.h"
#include "../silownia_projekt/Trening_personalny.cpp"
#include "../silownia_projekt/Grupa_zajeciowa.cpp"
#include "../silownia_projekt/Wizyta_u_dietetyla.cpp"
#include "../silownia_projekt/Trener.cpp"
#include "../silownia_projekt/Klient.cpp"
#include "../silownia_projekt/Dietetyk.cpp"
#include "../silownia_projekt/Karnet.cpp"
#include "../silownia_projekt/Wejœcie_jednorazowe.cpp"





using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestTreningpersonalny
{
	TEST_CLASS(TestTreningpersonalny)
	{
	public:

		TEST_METHOD(TestKonstruktora)
		{
			int d = 6;
			double g = 17.40;
			string i = "wysoka";
			Trener unnamed_Trener_("a", "b", 1);
			Klient unnamed_Klient_("c", "d", 2);
			Trening_personalny tr(d, g, i, &unnamed_Trener_,&unnamed_Klient_);
			Assert::AreEqual(d, tr.get_dzien());
			Assert::AreEqual(g, tr.get_godzina());

			Assert::IsTrue(&unnamed_Trener_ == tr._unnamed_Trener_);
			Assert::IsTrue(&unnamed_Klient_ == tr._unnamed_Klient_);

			
		}
	};
}

