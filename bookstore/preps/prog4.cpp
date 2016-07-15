#include <iostream>
int main() {
	int sum = 0, val = 50;
	// keep executing while as long as val is less than or equal to 10
	while (val <= 100) {
		sum += val;  // assigns sum + val to sum
		++val;
	}
	std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;

	val = 10;
	while (val >= 0) {
		std::cout << val << " ";
		--val;
	}

	std::cout << "Key in two integers m, n (m <= n), and I'll print the integers in [m, n]: " << std::endl;
	int m = 0, n = 0;
	std::cin >> m >> n;
	val = m;
	while (val <= n) {
		std::cout << val << ", ";
		++val;
	}

	return 0;
}