#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 13.2.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a = MIN(2, 5);
			Assert::AreEqual(a, 2);
		}
	};
}
