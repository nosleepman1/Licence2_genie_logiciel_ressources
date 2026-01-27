#include <iostream>
#include "files.hpp"


int main()
{
    
    queue<int> file;

    file.enqueue(17);
    file.enqueue(74);
    file.enqueue(45);

    file.display();

    file.dequeue();
    file.display();
    file.dequeue();
    file.display();
    file.dequeue();

    file.display();




    return 0;
}
