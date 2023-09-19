#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.NikolaevaAN.CourseControl_0.V1.Task2.Lib/Tyuiu.NikolaevaAN.CourseControl_0.V1.Task2.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuNikolaevaANCourseControl0V1Task2Test
{
	TEST_CLASS(TyuiuNikolaevaANCourseControl0V1Task2Test)
	{
	public:
		
		TEST_METHOD(TestMethod2)
		{
			//Init
			Control_0* date = new Control_0();
			int x = 3;
			int y = 1;
			int z = 2;
			int c;

			//run
			c = date->Control(x, y, z);

			//Valid
			Assert::AreEqual(6, c);
		}
	};
}
