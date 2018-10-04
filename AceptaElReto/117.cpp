//La fiesta aburrida
#include <iostream>
#include <string>

int main()
{
    std::string nombre, saludo;
    int n;
    
    std::cin >> n;
    while (n > 0)
    {
        std::cin >> saludo >> nombre;
        std::cout << "Hola, " << nombre << "." << std::endl;
        
        n--;
    }

    return 0;
}