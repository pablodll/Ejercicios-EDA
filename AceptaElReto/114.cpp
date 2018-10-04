//Último dígito del factorial
#include <iostream>

int main()
{
  int n, casos, fact;
  
  std::cin >> casos;
  while(casos > 0)
  {
    std::cin >> n;
    
    if(n == 0) fact = 1;
    else if(n == 3) fact = 6;
    else if(n > 4) fact = 0;
    else fact = n;
      
    std::cout << fact << std::endl;
    casos--;
  }
  return 0;
}