//Polisílaba es polisíliba
#include <iostream>
#include <string>
#include <ctype.h>

const int TAM = 10000;

int main()
{
	int n;
	std::string a, b;

	std::cin >> n;
	while (n--)
	{
		std::cin >> (a);
		std::cin >> b;
		std::cin >> b;
		if (a.length() == b.length())
		{
			int i = a.length();
			while ((i--) && (toupper(a[i]) == toupper(b[i]))) {
			}
			if(i == a.length())
				std::cout << "TAUTOLOGIA" << std::endl;
			else
				std::cout << "NO TAUTOLOGIA" << std::endl;
		}
		else
			std::cout << "NO TAUTOLOGIA" << std::endl;
	}

	return 0;
}