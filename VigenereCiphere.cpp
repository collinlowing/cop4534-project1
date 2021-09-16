
/* Student Name: Collin Lowing
 * File Name: VigenereCiphere.cpp
 * Project 1
 *
 * Source file for class VigenereCiphere
 */

#include "VigenereCiphere.hpp"

std::string VigenereCiphere::generateKey(std::string name, std::string keyWord)
{
  std::string newKey;
  unsigned int nameSize = name.size();

  for(unsigned int i = 0, j = 0; i < nameSize; ++i, ++j){
        if(j == keyWord.size())
            j = 0;
 
        newKey[i] = keyWord[j];
    }
  
  return newKey;
}

std::string VigenereCiphere::encrypt(std::string name, std::string key)
{
  std::string encryptedPassword;
 
    for (unsigned int i = 0; i < name.size(); i++)
    {
        // convert name into char in range 0-25
        char ch = (name[i] + key[i]) %26;
 
        // convert into ASCII value
        ch += 'A';
 
        encryptedPassword.push_back(ch);
    }
  
  return encryptedPassword;
}

std::string VigenereCiphere::decrypt(std::string encryptedPassword, std::string key)
{
	std::string name = encryptedPassword;
 
    for (unsigned int i = 0 ; i < encryptedPassword.size(); i++)
    {
        // convert name into char in range 0-25
        char ch = (encryptedPassword[i] - key[i] + 26) %26;
 
        // convert into ASCII value
        ch += 'A';
        name.push_back(ch);
    }

    return name;
}