#include <iostream>
#include "Utils.h"
#include <time.h>

int main()
{
	srand(time(NULL));

	const int size = 10;
	int a[size];
	int b[size];

	Generate(a, size);

	for (int i = 0; i < size; i++) { std::cout << a[i] << " "; }
	std::cout << std::endl;

	Reverse(a, size);

	for (int i = 0; i < size; i++) { std::cout << a[i] << " "; }
	std::cout << std::endl;

	Copy(a, b, size);

	for (int i = 0; i < size; i++) { std::cout << a[i] << " "; }
	std::cout << std::endl;
}
