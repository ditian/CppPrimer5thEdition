#include <iostream>
#include "Sales_item.h"

int main() {
	Sales_item item;
	int serial = 1;
	while (std::cin >> item) {
		std::cout << "[" << serial++ << "] " << item << std::endl;
	}
	return 0;
}