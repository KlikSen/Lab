#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6_2(1).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest621
{
	TEST_CLASS(UnitTest621)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int f;
			int w[2] = { 1,2 };
			f = Sum(w, 2);
			Assert::AreEqual(f, 1);
		}
	};
}
