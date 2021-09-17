
/* Student Name: Collin Lowing
 * File Name: VigenereCiphere.cpp
 * Project 1
 *
 * Source file for class VigenereCiphere
 */

#include "VigenereCiphere.hpp"

//Resizes key word to fit the name size.
std::string VigenereCiphere::resizeKey(std::string name, std::string keyWord)
{
  int nameSize = name.size();
 
    for (int i = 0; ; i++)
    {
        if (nameSize == i)
            i = 0;

        if (keyWord.size() == name.size())
            break;

        keyWord.push_back(keyWord[i]);
    }
    return keyWord;
}

// Encrypts name using resized key
std::string VigenereCiphere::encrypt(std::string name, std::string key)
{
  std::string encryptedPassword;
 
    for (unsigned int i = 0; i < name.size(); i++)
    {
        // converting in range 0-25
        char x = (name[i] + key[i]) %26;
 
        // convert into alphabets(ASCII)
        x += 'A';
 
        encryptedPassword.push_back(x);
    }
    return encryptedPassword;
}

// Decrypts the name using the resized key
std::string VigenereCiphere::decrypt(std::string encryptedPassword, std::string key)
{
	std::string decryptedMessage;
 
    for (unsigned int i = 0 ; i < encryptedPassword.size(); i++)
    {
        // converting in range 0-25
        char x = (encryptedPassword[i] - key[i] + 26) %26;
 
        // convert into alphabets(ASCII)
        x += 'A';
        decryptedMessage.push_back(x);
    }
    return decryptedMessage;
}