#include "pch.h"
#include "CppUnitTest.h"
#include "../Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81str
{
	TEST_CLASS(UnitTest81str)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			std::string s = "sas,-,-war,-";
			t = Count(s);
			Assert::AreEqual(t, 3);
		}
	};
}
