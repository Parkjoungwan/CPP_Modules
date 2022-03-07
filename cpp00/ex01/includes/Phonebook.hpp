#include "Contact.hpp"

class Phonebook
{
	public:
		Phonebook();
		~Phonebook();

		void	ft_NewCon();
		void	ft_FindCon();

	private:
		std::string ft_Formating(std::string str);
		Contact		ContactList[8];
		int			ContactListSize;
};
