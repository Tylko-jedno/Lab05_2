#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab05_2/Lab05_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double t = 1;
			t = A(-1, 1, t);
			Assert::AreEqual(t, 1.0, 0.000001);
		}

		TEST_METHOD(TestMethod2)
		{
			double s = 1;
			int n = 11;
			s = S(-1, 0.0000001, n, s);
			Assert::AreEqual(s, 2.718282, 0.000001);
		}
	};
}

