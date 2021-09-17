#include <iostream>
#include <queue>

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
  std::queue<std::string> nameQueue;

  NameParser parse;
  nameQueue = parse.readFile();
  std::cout << nameQueue.front() << std::endl;

  std::string outputFileName = "encrypteddata.txt";
  std::fstream fileOutput;

  fileOutput.open(outputFileName, std::ios_base::out);
  if(!fileOutput.is_open())
  {
    std::cout << "encrypteddata.txt could not be opened or created." << std::endl;
    exit(1);
  }
  else
  {
    while(!nameQueue.empty())
    {
      fileOutput << ciphere.encrypt(nameQueue.front(), key) << std::endl;
      nameQueue.pop();
    }
  }

	return 0;
}