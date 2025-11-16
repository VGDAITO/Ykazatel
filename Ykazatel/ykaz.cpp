#include <iostream>
#include <windows.h>
#include <string>
#include <limits>
#include <cctype>

void Format(std::string& offer)
{
	if (!offer.empty())
		offer[0] = toupper((unsigned char)offer[0]);

	for (size_t i = 1; i < offer.length(); i++)
	{
		if (offer[i - 1] == ' ')
			offer[i] = toupper((unsigned char)offer[i]);
		else
		{
			offer[i] = tolower((unsigned char)offer[i]);
		}
	}
	std::cout << '\n';
}
std::string LowerStr(const std::string& s)
{
	std::string result = s;
	for (size_t i = 0; i < result.size(); i++)
	{
		result[i] = std::tolower((unsigned char)result[i]);
	}
	return result;
}

bool TrueFalse(const std::string& text, const std::string& word)
{
	

	std::string lowText = LowerStr(text);
	std::string lowWord = LowerStr(word);
	return lowText.find(lowWord) != std::string::npos;

}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string offer;
	std::cout << "Введите предложение: ";
	std::getline(std::cin, offer, '\n');

	

	if (offer.empty())
	{
		std::cout << "Строка пустая!";
		std::cout << '\n';
	}
	
	Format(offer);
	
	if (!offer.empty() && offer.back() != '.')
	{
		offer.push_back('.');

	}

	std::cout << "\nПреобразованная строка: " << offer << "\n\n";
	
	std::string word;
	std::cout << "Введите слово для поиска: ";
	std::getline(std::cin, word);

	if (TrueFalse(offer, word))
		std::cout << "Нашёл\n";
	else
		std::cout << "Не нашёл\n";


	return 0;
}