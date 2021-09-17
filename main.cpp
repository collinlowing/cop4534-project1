#include <iostream>

#include "VigenereCiphere.hpp"
#include "NameParser.hpp"

int main()
{
  // Testing Ciphere
	std::string test = "HELLO";
  std::string keyWord = "JAMES";
  std::string key;
  std::string encrypted;
	VigenereCiphere ciphere;

  key = ciphere.resizeKey(test, keyWord);
  encrypted = ciphere.encrypt(test, key);

	std::cout << encrypted << std::endl;
  std::cout << ciphere.decrypt(encrypted, key) << std::endl;

  //testing NameParser
  NameParser parse;
  parse.readFile();

	return 0;
}