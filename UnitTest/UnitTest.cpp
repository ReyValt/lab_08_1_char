#include "pch.h"
#include "CppUnitTest.h"
#include "../pr_08_1_char/pr_08_1_char.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		

		TEST_METHOD(TestContainsWhileLetters_AllLettersPresent)
		{
			char str[] = "while";
			Assert::IsTrue(ContainsWhileLetters(str));
		}

		TEST_METHOD(TestReplaceWhile_MultipleOccurrences)
		{
			char str[] = "while x while y while";
			char* result = ReplaceWhile(str);
			Assert::AreEqual("** x ** y **", result);
			delete[] result;
		}
	};
}
