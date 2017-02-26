#include<iostream>
#include<string>
#include<locale>
#include"CesarEncriptor.hpp"
#include"CesarDecriptor.hpp"

int main() {
	setlocale(LC_ALL, "Russian");

	std::cout << "Input text for encripting: " << std::endl;
	std::string text{};
	std::getline(std::cin, text);
	system("cls");

	auto& encryptor{ CesarEncriptor::instance() };
	auto& decryptor{ CesarDecriptor::instance() };

	std::cout << "Input text:  " << text << std::endl;

	std::string& encrypted_text{ encryptor.encrypte(text) };

	std::cout << "Encripted text:  " << encrypted_text << std::endl;

	std::cout << "Decripted text:  " << decryptor.decrypte(encrypted_text) << std::endl;

	system("pause");
	return {0};
}