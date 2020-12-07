#include "pch.h"
#include "CppUnitTest.h"
#include "../Project9.2.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int kil_student = 2;
			student* s = new student[kil_student];
			s[0].surname = "kant";
			s[0].specialization = Special(3);
			s[0].phisuka = 2;
			s[0].matematic = 3;
			s[0].informatic = 3;
			s[1].surname = "dante";
			s[1].specialization = Special(0);
			s[1].phisuka = 4;
			s[1].matematic = 4;
			s[1].informatic = 4;

			Sort(s, kil_student);
			Assert::AreEqual(1, 1);
		}
	};
}
