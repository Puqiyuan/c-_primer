#include <iostream>

int main(int argc, char *argv[])
{
	int num = 10;
	while (num >= 0) {
		std::cout << num << " ";
		--num;
	}
	std::cout << std::endl;

    return 0;
}
