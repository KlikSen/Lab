#include "pch.h"
#include "CppUnitTest.h"
#include "../Source.cpp"
#define _CRT_SECURE_NO_WARNINGS

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81char
{
	TEST_CLASS(UnitTest81char)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			char s[50] = "sas,-,-war,-";
			char* d = new char [50];
			d = Change(s);
			Assert::AreEqual(d, "sas**war*");

		}
	};
}
