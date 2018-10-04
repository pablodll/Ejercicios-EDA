//San Fermines
#include <iostream>

const int TAM = 10000;

int main()
{
	int n, m, max;

	while (std::cin >> n)
	{
		max = 0;
		while(n--)
		{
			std::cin >> m;
			if (m > max) max = m;
		}
		std::cout << max << std::endl;
	}

	return 0;
}