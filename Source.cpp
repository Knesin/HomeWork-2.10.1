#include<iostream>
#include<string>

int main() {
	std::string str;
	setlocale(LC_ALL, "Russian");
	std::cout << "������� ���: ";
	std::cin >> str;
	std::cout << "������������, " << str << std::endl;
}