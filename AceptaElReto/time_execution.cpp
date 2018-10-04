#include <iostream>
#include <ctime>

int main()
{
    unsigned t0, t1;
    t0 = clock();

    t1 = clock();
    double time = (double(t1-t0)/CLOCKS_PER_SEC);
    std::cout << "Time: " << time << std::endl;

    return 0;
}