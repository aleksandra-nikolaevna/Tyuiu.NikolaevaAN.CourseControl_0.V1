// Tyuiu.NikolaevaAN.CourseControl_0.V1.Task2.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.CoursControl_0/Tyuiu.CoursControl_0.cpp"

// TODO: This is an example of a library function
class Control_0
{
public:
	virtual int Control(int x, int y, int z)
	{
		return 5 + ((2 * x - z) / (3 + y * y));
	}
};
