/*
 * Student Name: Collin Lowing
 * File Name: NameParser.cpp
 * Project 1
 *
 * Source file for class NameParser
 */

#include "NameParser.hpp"

void NameParser::readFile()
{
  fileInputStream.open(fileName);
  std::string tempLine;
  if(fileInputStream.is_open())
  {
    while(std::getline(fileInputStream, tempLine))
    {
      parseLine(tempLine);
    }
  }
  else
  {
    std::cout << "FATAL ERROR: names.txt is missing or cannot be opened" << std::endl;
    std::exit(1);
  }
}

std::string NameParser::parseLine(std::string line)
{
  std::string name = line.substr(0, line.find(" "));

  std::cout << name << std::endl;

  return name;
}