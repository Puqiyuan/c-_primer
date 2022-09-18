#include <iostream>

int main(int argc, char *argv[])
{
    int n = 50, sum = 0;
	while (n <= 100) {
		sum += n;
		++n;
	}
	std::cout << "Sum is " << sum << std::endl;

    return 0;
}
