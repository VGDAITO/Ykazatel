#include <iostream>
#include <windows.h>
#include <string>
#include <limits>
#include <cctype>

void capital(std::string &offer)
{
	if (!offer.empty())
		offer[0] = toupper((unsigned char)offer[0]);

	for (size_t i = 1; i < offer.length(); i++)
	{
		if (offer[i - 1] == ' ')
			offer[i] = toupper((unsigned char)offer[i]);

	}
	std::cout << '\n';
}
void Empty(std::string& offer)
{
	if (offer.empty())
	{
		std::cout << "Строка пустая!";
	}
	else
	{
		std::cout << "Строка не пустая";
	}
	std::cout << '\n';
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string offer;
	std::cout << "Введите предложение: ";
	std::getline(std::cin, offer, '\n');

	capital(offer);
	Empty(offer);
	std::cout << offer;
	return 0;
}