#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.NikolaevaAN.CourseControl_0.V1.Lib/Tyuiu.NikolaevaAN.CourseControl_0.V1.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuNikolaevaANCourseControl0V1Task1Test
{
	TEST_CLASS(TyuiuNikolaevaANCourseControl0V1Task1Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			//Init
			Control_0* date = new Control_0();
			int a = 123;
			int c;

			//run
			c = date->Control(a);

			//Valid
			Assert::AreEqual(6, c);
		}
	};
}
