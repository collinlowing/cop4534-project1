#include <iostream>

#include "VigenereCiphere.hpp"

int main()
{
	std::string test = "test";
  std::string keyWord = "jones";
  std::string key;
	VigenereCiphere ciphere;

  key = ciphere.generateKey(test, keyWord);

	std::cout << ciphere.decrypt(test, key) << std::endl;

	return 0;
}