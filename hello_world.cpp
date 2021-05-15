#include <iostream>
#include <string>

int main()
{
	std::string name;
	std::gitline(std::cin, name);
	cout << "Hello world" << name << std::endl;;
	return 0;
}
