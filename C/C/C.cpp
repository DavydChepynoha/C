#include <iostream>
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Task 1
	/*
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
	*/
	//Task 3

	int a;
	int b;
	std::cout << "Довжина: ";
	std::cin >> a;
	std::cout << "Ширина: ";
	std::cin >> b;

	char sym;
	int color;
	std::cout << "Символ: ";
	std::cin >> sym;
	std::cout << "Колір 1 - Червоний 2 - Жовтий 3 - Синій: ";
	std::cin >> color;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			if (i == 0 || i == a - 1) {
				if (color == 1) {
					std::cout << "\033[0;31m" << sym;
				}
				else if (color == 2) {
					std::cout << "\033[0;33m" << sym;
				}
				else if (color == 3) {
					std::cout << "\033[0;34m" << sym;
				}
				else {
					std::cout << sym;
				}
			}
			else {
				if (j == 0 || j == b - 1) {
					if (color == 1) {
						std::cout << "\033[0;31m" << sym;
					}
					else if (color == 2) {
						std::cout << "\033[0;33m" << sym;
					}
					else if (color == 3) {
						std::cout << "\033[0;34m" << sym;
					}
					else {
						std::cout << sym;
					}
				}
				else {
					std::cout << " ";
				}
			}
			
		}
		std::cout << std::endl;
	}



	std::cout << "\033[0m";
	return 0;
}