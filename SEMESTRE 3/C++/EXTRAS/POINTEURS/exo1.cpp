#include <iostream>

void permutation(int* a, int *b){
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}


int main()
{
	
	int a = 15, b = 20;

	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;

	permutation(&a, &b);
	
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;

	return 0;
}