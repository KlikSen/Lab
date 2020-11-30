#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6_4(1).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest641
{
	TEST_CLASS(UnitTest641)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			int* m = new int[3];
			m[0] = 1; m[1] = 2; m[2] = 1;
			t = Sum(m, 3);
			Assert::AreEqual(t, 4);
		}
	};
}
