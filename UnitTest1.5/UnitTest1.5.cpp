#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1.5/Man.h"
#include "../lab1.5/Man.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest15
{
	TEST_CLASS(UnitTest15)
	{
	public:

		TEST_METHOD(TestInitMethod)
		{
			Man man;
			man.Init("John", 25, "Male", 70.5);
			man.changeAge(30);
			Assert::AreEqual(30, man.getAge());

		}
	};
}
