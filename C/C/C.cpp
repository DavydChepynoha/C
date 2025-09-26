#include <iostream>
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Task 1
	std::cout << "Task 1" << std::endl;
	int num;
	std::cout << "Введіть рік: ";
	std::cin >> num;

	if (num % 4 == 0 && (num % 100 == 0 && num % 400 == 0)) {
		std::cout << num << " рік: 366 днів" << std::endl;
	}
	else {
		std::cout << num << " рік: 365 днів" << std::endl;
	}
	//Task2

	int num1;
	int num2;

	std::cout << "1 - Червоний текст 2 - Жовтий текст 3 - Синій текст: " << std::endl;
	std::cin >> num2;
	if (num2 == 1) {
		std::cout << "\033[0;31m";
	}
	else if (num2 == 2) {
		std::cout << "\033[0;33m";
	}
	else if (num2 == 3) {
		std::cout << "\033[0;34m";
	}
	std::cout << "Text" << std::endl;

	std::cout << "1 - Червоний фон 2 - Жовтий фон 3 - Синій фон: " << std::endl;
	std::cin >> num1;
	if (num1 == 1) {
		std::cout << "\033[41m";
	}
	else if (num1 == 2) {
		std::cout << "\033[43m";
	}
	else if (num1 == 3) {
		std::cout << "\033[44m";
	}
	std::cout << "Text" << std::endl;





	std::cout << "\033[0m";
	return 0;
}