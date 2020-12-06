#include "pch.h"
#include "CppUnitTest.h"
#include "../Source.cpp"
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81iter
{
	TEST_CLASS(UnitTest81iter)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			char s[50] = "sas,-,-war,-";
			char* d = new char[50];
			d = Change(s);
			Assert::AreEqual(d, "sas**war*");
		}
	};
}
