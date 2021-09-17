/*
 * Student Name: Collin Lowing
 * File Name: HashEntry.cpp
 * Project 1
 *
 * Source file for class HashEntry
 */

#include "HashEntry.hpp"

HashEntry::HashEntry() {
	// TODO Auto-generated constructor stub

}

HashEntry::~HashEntry() {
	while(nextEntry != nullptr)
  {
    HashEntry* tempPtr = nextEntry;
    delete nextEntry;
  }
}

std::string getValue();
  void setValue(std::string value);
  int getKey();
  HashEntry* getNextEntry();
  void setNextEntry(HashEntry* nextEntry);