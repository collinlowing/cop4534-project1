#include <iostream>
#include <queue>

#include "VigenereCiphere.hpp"
#include "NameParser.hpp"

int main()
{
  std::string keyWord = "JAMES";
  std::string key;
	VigenereCiphere ciphere;

  key = ciphere.resizeKey("Wolfeschlegelsteinhausenbergerdorff", keyWord);

  // Read names.txt and extract a list of names in a queue
  std::queue<std::string> nameQueue;

  NameParser parse;
  nameQueue = parse.readFile();

  // Write to file encrypteddata.txt
  std::string outputFileName = "encrypteddata.txt";
  std::fstream fileOutput;

  // Test if file is open
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