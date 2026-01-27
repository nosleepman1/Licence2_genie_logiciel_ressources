#include "list.hpp"
#include <iostream>

int main(void)
{
    liste<int> Li;
    Li.push_front(14);
    Li.push_front(74);
    Li.push_front(26);
    Li.push_front(7);
    Li.push_back(17);


    Li.display();


    return 0;
}
