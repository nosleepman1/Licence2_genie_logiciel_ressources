#include <ostream>
#include <iostream>
#include "time.hpp"

int main()
{
    JC::time t1{13,47,51};
    JC::time t2{3,5,8};

    std::cout << t1 << std::endl;
    std::cout << t2 << std::endl;

    std::cout << t1 + t2 << std::endl;

    return 0;
}

