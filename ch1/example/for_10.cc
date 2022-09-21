#include <iostream>

int main(int argc, char *argv[])
{
	int sum = 0;
	for (int val = 1; val <= 10; ++val)
		sum += val;

	std::cout << "Sum is " << sum << "\n";

    return 0;
}
