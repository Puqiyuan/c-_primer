#include <iostream>

int main(int argc, char *argv[])
{
	int sum = 0, value = 0;
	while (std::cin >> value)
		sum += value;
	std::cout << "\nSum is: " << sum << "\n";

    return 0;
}
