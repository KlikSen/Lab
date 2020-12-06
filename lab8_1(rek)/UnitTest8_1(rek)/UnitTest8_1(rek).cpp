#include "pch.h"
#include "CppUnitTest.h"
#include "../Source.cpp"
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81rek
{
	TEST_CLASS(UnitTest81rek)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			char s[50] = "sas,-,-war,-";
			char* d = new char[50];
			char* d1 = new char[51];
			d1[0] = '\0';
			d = Change(d1,s, d1, 0);
			Assert::AreEqual(d, "sas**war*");
		}
	};
}
