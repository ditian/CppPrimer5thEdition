#include <iostream>
#include "Sales_item.h"

int main() {
	Sales_item current, sum;
	while (std::cin >> current) {
		sum += current;
	}
	std::cout << "[ " << sum << " ]" << std::endl;
	return 0;
}