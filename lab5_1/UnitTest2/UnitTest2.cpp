#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5_1/lab5_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = h(0, 2);
			Assert::AreEqual(t, 3);
		}
	};
}
