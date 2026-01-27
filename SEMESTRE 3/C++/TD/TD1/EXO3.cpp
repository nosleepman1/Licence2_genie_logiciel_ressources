#include <iostream>


int main()
{
	using namespace std;

	int tab[] = {15,14,5,63,9,17,25};
	int N = sizeof(tab) / sizeof(tab[0]);

	int *ptr = tab;

	for (int i = 0; i < N; i++)
	{
		std::cout << " [" << *ptr << "] ";
		ptr++;
	}

	return 0;
}
	
