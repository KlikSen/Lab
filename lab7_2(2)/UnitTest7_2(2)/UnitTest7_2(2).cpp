#include "pch.h"
#include "CppUnitTest.h"
#include "../lab7_2(2).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest722
{
	TEST_CLASS(UnitTest722)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			int** m = new int* [2];
			for (int i = 0; i < 2; i++)
				m[i] = new int[2];
			m[0][0] = 1; m[0][1] = 2; m[1][0] = 3; m[1][1] = 4;
			int min = m[0][0];
			t = Min(m, 2, 0, 0, min);
			Assert::AreEqual(t, 1);

		}
	};
}
