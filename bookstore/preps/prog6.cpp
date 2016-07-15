#include <iostream>
int main() {
	// currVal is the number we are counting; we'll read new values into val
	int currVal = 0, val = 0;
	if (std::cin >> currVal) {
		int cnt = 1;
		while (std::cin >> val) {
			if (val == currVal) ++cnt;
			else {
				std::cout << currVal << " occurs " << cnt << " times." << std::endl;
				currVal = val;
				cnt = 1;
			}
		}
		// print the count for the last value in the file
		std::cout << currVal << " occurs " << cnt << " times." << std::endl;
	}
	return 0;
}