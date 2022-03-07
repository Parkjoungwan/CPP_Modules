#include "Contact.hpp"
#include <iostream>

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string	Contact::get_firstname()
{
	return this->firstname;
}

std::string	Contact::get_lastname()
{
	return this->lastname;
}


std::string	Contact::get_nickname()
{
	return this->nickname;
}


std::string	Contact::get_phonenumber()
{
	return this->phonenumber;
}


std::string	Contact::get_darkestsecret()
{
	return this->darkestsecret;
}

void		Contact::set_firstname(std::string input)
{
	this->firstname = input;
}

void		Contact::set_lastname(std::string input)
{
	this->lastname = input;
}

void		Contact::set_nickname(std::string input)
{
	this->nickname = input;
}

void		Contact::set_phonenumber(std::string input)
{
	this->phonenumber = input;
}

void		Contact::set_darkestsecret(std::string input)
{
	this->darkestsecret = input;
}

void		Contact::display()
{
	std::cout << "First name: " << this->firstname << std::endl;
	std::cout << "Last name: " << this->lastname << std::endl;
	std::cout << "Nick name: " << this->nickname << std::endl;
	std::cout << "Phonenumber: " << this->phonenumber << std::endl;
	std::cout << "Darkestsecret: " << this->darkestsecret << std::endl;
}
