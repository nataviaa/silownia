#include "pch.h"
#include "CppUnitTest.h"
//#include "../silownia_projekt/Dieta.h"
#include "../silownia_projekt/Dieta.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestDieta
{
	TEST_CLASS(TestDieta)
	{
	public:
		
		TEST_METHOD(TestKonstruktora)
		{
			int cal = 1300;
			Dieta d(cal);
			Assert::AreEqual(cal, d.get_kalorycznosc());
		}
	};
}
