#include <iostream>

#include "VigenereCiphere.hpp"

int main()
{
	std::string test = "test";
	VigenereCiphere ciphere;

	std::cout << ciphere.decrypt(test) << std::endl;

	return 0;
}