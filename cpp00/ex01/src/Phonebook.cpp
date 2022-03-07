#include "Phonebook.hpp"
#include <sstream>
#include <iostream>
#include <iomanip>

Phonebook::Phonebook() : ContactListSize(0)
{
}

Phonebook::~Phonebook()
{
}

void	Phonebook::ft_NewCon()
{

	int index;

	if (this->ContactListSize >= 8)
		index = this->ContactListSize % 8;
	else
		index = this->ContactListSize;
	std::string input;

	std::cout << "Write your FirstName and input Enter: ";
	std::getline(std::cin, input);
	this->ContactList[index].set_firstname(input);
	std::cout << "Write your LastName and input Enter: ";
	std::getline(std::cin, input);
	this->ContactList[index].set_lastname(input);
	std::cout << "Write your NickName and input Enter: ";
	std::getline(std::cin, input);
	this->ContactList[index].set_nickname(input);
	std::cout << "Write your Phonenumber and input Enter: ";
	std::getline(std::cin, input);
	this->ContactList[index].set_phonenumber(input);
	std::cout << "Write your DarkestSecret and input Enter: ";
	std::getline(std::cin, input);
	this->ContactList[index].set_darkestsecret(input);
	this->ContactListSize++;
	std::cout << "Add Contact Finished!!" << std::endl;
}

void	Phonebook::ft_FindCon()
{
	if (this->ContactListSize == 0)
	{
		std::cout << "There is Zero ContactInfo!!" << std::endl;
		return ;
	}

	int index;

	if (this->ContactListSize > 8)
		index = 8;
	else
		index = this->ContactListSize;

	for (int i = 0; i < index; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << this->ft_Formating(ContactList[i].get_firstname()) << "|";
		std::cout << std::setw(10) << this->ft_Formating(ContactList[i].get_lastname()) << "|";
		std::cout << std::setw(10) << this->ft_Formating(ContactList[i].get_nickname()) << "|" << std::endl;
	}

	std::string input;
	int			find;

	std::cout << "Write index number: ";
	std::getline(std::cin, input);
	std::istringstream	ssInt(input);
	ssInt >> find;
	if (find <= 0 || find > index || ssInt.fail())
	{
		std::cout << "Wrong index!!"<< std::endl;
		return ;
	}
	find = find - 1;
	this->ContactList[find].display();
}

std::string	Phonebook::ft_Formating(std::string str)
{
	std::string FormatingStr;

	if (str.size() > 10)
		FormatingStr = str.substr(0, 9) + '.';
	else
		FormatingStr = str;
	return FormatingStr;
}
