#include <iostream>

#include "VigenereCiphere.hpp"

int main()
{
	std::string test = "HELLO";
  std::string keyWord = "JAMES";
  std::string key;
  std::string encrypted;
	VigenereCiphere ciphere;

  key = ciphere.resizeKey(test, keyWord);
  encrypted = ciphere.encrypt(test, key);

	std::cout << encrypted << std::endl;
  std::cout << ciphere.decrypt(encrypted, key) << std::endl;

	return 0;
}