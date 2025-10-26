#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.5/lab5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
	TEST_CLASS(UnitTest55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(1.0, a(1), 0.0001, L"a(1) має бути 1");
		}
	};
}
