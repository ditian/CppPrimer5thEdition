#include <iostream>
/*
 * Trying some nested comments...
 *
 */
int main() {
	std::cout << "/*";  // legal
	std::cout << "*/";  // legal
	// std::count << /* "*/" */;
	std::cout << /*  "*/" /* "/*"   */;
	return 0;
}