/*
 * Student Name: Collin Lowing
 * File Name: NameParser.hpp
 * Project 1
 *
 * Header for class NameParser
 */

#ifndef NAMEPARSER_H_
#define NAMEPARSER_H_

#include <string>
#include <iostream>
#include <fstream>
#include <queue>


//#include "NameLinkedList.hpp"

class NameParser {
private:
  std::string fileName = "names.txt";
  std::ifstream fileInputStream;
  //NameLinkedList nameList;
public:
  std::queue<std::string> readFile();
  std::string parseLine(std::string line);
};

#endif /* NAMEPARSER_H_ */
