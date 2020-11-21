#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6_2(2)/lab6_2(2).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest622
{
	TEST_CLASS(UnitTest622)
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
