#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5_3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = g(2);
			Assert::AreEqual(t, 0);
		}
	};
}
