#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.3/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int actual;
			int expected = 2;
			double x = 0;
			double s = (cos(x) * cos(x) + 1) / exp(x);
			actual = s;
			Assert::AreEqual(actual, expected);
		}
	};
}
