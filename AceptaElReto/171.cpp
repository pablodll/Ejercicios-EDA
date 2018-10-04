//Abadías pirenaicas
#include <iostream>

const int MAX = 100000;

int main()
{
    int num;
    int cordilleras[MAX];
    int construir;
    int max;

    std::cin >> num;

    while(num > 0)
    {
        construir = 1;

        for(int i = 0; i < num; i++)
        {
            std::cin >> cordilleras[i];
        }

        max = cordilleras[num - 1];
        for(int i = num - 2; i >= 0; i--)
        {
            if(cordilleras[i] > max)
            {
                max = cordilleras[i];
                construir++;
            }
        }

        std::cout << construir << std::endl;

        std::cin >> num;
    }
    return 0;
}