/*
 * Student Name: Collin Lowing
 * File Name: HashEntry.hpp
 * Project 1
 *
 * Header for class HashEntry
 */

#ifndef HASHENTRY_H_
#define HASHENTRY_H_

#include<string>

class HashEntry {
private:
  int key;
  std::string value;
  HashEntry* nextEntry;
public:
	HashEntry();
	~HashEntry();
  std::string getValue();
  void setValue(std::string value);
  int getKey();
  HashEntry* getNextEntry();
  void setNextEntry(HashEntry* nextEntry);
};

#endif /* HASHENTRY_H_ */