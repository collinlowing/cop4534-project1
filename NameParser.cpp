/*
 * Student Name: Collin Lowing
 * File Name: NameParser.cpp
 * Project 1
 *
 * Source file for class NameParser
 */

#include "NameParser.hpp"

std::queue<std::string> NameParser::readFile()
{
  fileInputStream.open(fileName);
  std::string tempLine;
  std::queue<std::string> nameQueue;

  if(fileInputStream.is_open())
  {
    while(std::getline(fileInputStream, tempLine))
    {
      nameQueue.push(parseLine(tempLine));
    }
  }
  else
  {
    std::cout << "FATAL ERROR: names.txt is missing or cannot be opened" << std::endl;
    std::exit(1);
  }

  return nameQueue;
}

std::string NameParser::parseLine(std::string line)
{
  std::string name = line.substr(0, line.find(" "));

  return name;
}