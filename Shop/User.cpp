#include "User.h"


void User::setName(std::string name) {
	this->firstName = name;
}

void User::setLastname(std::string lastname) {
	this->lastName = lastname;
}

void User::setEmail(std::string email) {
	this->email = email;
}

void User::setPhoneNumber(std::string phoneNumber) {
	this->phoneNum = phoneNumber;
}

std::string User::getFirstName()
{
	return firstName;
}

std::string User::getLastName()
{
	return lastName;
}

std::string User::getEmail()
{
	return email;
}

std::string User::getPhoneNum()
{
	return phoneNum;
}
