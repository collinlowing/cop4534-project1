/*
 * Student Name: Collin Lowing
 * File Name: VigenereCiphere.hpp
 * Project 1
 *
 * Header for class VigenereCiphere
 */

#ifndef VIGENERECIPHERE_H_
#define VIGENERECIPHERE_H_

#include <string>

class VigenereCiphere {

public:
  std::string resizeKey(std::string name, std::string key);
	std::string encrypt(std::string name, std::string key);
	std::string decrypt(std::string encryptedPassword, std::string key);
};

#endif /* VIGENERECIPHERE_H_ */
