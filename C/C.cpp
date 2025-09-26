#include <iostream>

int main() {
	int num;
	std::cout << "Введіть рік: " << std::endl;
	std::cin >> num;

	if (num % 4 == 0 && num % 100 == 0 && ((num % 100) / 400 == 0)) {
		std::cout << num << "рік: 366 днів";
	}
	else {
		std::cout << num << "рік: 365 днів";
	}

	return 0;
}