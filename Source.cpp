#include <iostream>
#include <exception>

int function(std::string str, int forbidden_length) {
	if (str.length() == forbidden_length)
		throw std::length_error("Вы ввели слово запретной длины! До свидания");
	else {
		return str.length();
	}
}


int main() {
	setlocale(LC_ALL, "RU");
	std::string str;
	int forbidden_length;
	std::cout << "Введите запретную длину: ";
	std::cin >> forbidden_length;
	while (true) {
	std::cout << "Введите слово: ";
	std::cin >> str;
	std::cout << std::endl;
	try {
		std::cout << "Длина слова " << str << " равна " << function(str, forbidden_length) << std::endl;

		}
	catch(const std::length_error& e) {
		std::cout << e.what();
		break;
		}
	}
}