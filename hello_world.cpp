#include <iostream>
#include <string>

int main()
{
<<<<<<<< HEAD
	std::string name;// user name
	std::gitline(std::cin, name);// read user name
=======
	std::string name;
	std::getline(std::cin, name); // read user name
>>>>>>>>b2013b3dela7544a82d92748c564a95ad8db3b93
	cout << "Hello world" << name << std::endl;;
	return 0;
}
