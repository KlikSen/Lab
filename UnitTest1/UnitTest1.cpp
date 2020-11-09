#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5_5/lab5_5cpp.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = f(3);
			Assert::AreEqual(t, 59);
		}
	};
}
