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
private:
	std::string	key;
	std::string name;
	std::string encryptedPassword;

public:
	std::string encrypt(std::string name);
	std::string decrypt(std::string encryptPassword);
};

#endif /* VIGENERECIPHERE_H_ */
