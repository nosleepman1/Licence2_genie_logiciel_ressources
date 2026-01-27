#include <iostream>
#include "Stack.hpp"

#include <stack>


int main()
{


    Stack<std::string> St;

    for (size_t i = 0; i < 5; i++)
    {
        St.empiler("Utilisateur ");
    }
    

   
   St.display();
   std::cout << "----------------\n\n" << std::endl;

   St.depiler();
   St.depiler();
   St.display();


    return 0;
}
