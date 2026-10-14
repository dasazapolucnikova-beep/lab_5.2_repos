#include "pch.h"
#include "CppUnitTest.h"
#include "../Project 5.2/Project 5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 0.5;       // Вхідний аргумент
			double eps = 0.0001;  // Точність
			int n = 0;            // Змінна для кількості доданків
			double s = 0.0;       // Змінна для збереження результату суми

			// Викликаємо функцію S з вашого коду
			S(x, eps, n, s);

			// Очікуване значення — це стандартна функція atan(x)
			double expected = atan(x);

			// Перевіряємо, чи порахована сума ряду 's' близька до atan(x) з точністю eps
			Assert::AreEqual(expected, s, 0.001);
		}
	};
}
