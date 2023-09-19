// Tyuiu.NikolaevaAN.CourseControl_0.V1.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.CoursControl_0/Tyuiu.CoursControl_0.cpp"

// TODO: Это пример библиотечной функции.
class Control_0
{
public:
	virtual int Control(int a)
	{
		int a1 = a / 100;
		int a2 = (a / 10) % 10;
		int a3 = a % 10;
		return a1 * a2 * a3;
	}
};
