#include <iostream>

int main(int argc, char *argv[])
{
	int start, stop, cur, sum = 0;
	std::cout << "Input two numbers(first bigger or equal second):" << std::endl;
	std::cin >> start >> stop;
	
	cur = start;
	while (cur <= stop) {
		sum += cur;
		++cur;
	}

	std::cout << "Sum is " << sum << "\n";

	return 0;
}
