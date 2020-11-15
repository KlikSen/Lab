#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5_4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int f;
			f = P0(10);
			Assert::AreEqual(f, 44);
		}
	};
}
