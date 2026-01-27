#include <iostream>
#include <string>

int main()
{
	using namespace std;

	char str[] = "ABDALLAHDIOUF";
	char *ptr = str;
	int N = sizeof(str);

	char *i;
	for ( i = ptr; i < ptr + N; i++)
	{
		std::cout << " [" << *i << "] ";
		
	}

	return 0;
}
	
