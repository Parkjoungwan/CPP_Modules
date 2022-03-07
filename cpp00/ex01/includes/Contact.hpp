#include <string>

class	Contact
{
	public:
		Contact();
		~Contact();

		std::string	get_firstname();
		std::string	get_lastname();
		std::string	get_nickname();
		std::string	get_phonenumber();
		std::string get_darkestsecret();

		void		set_firstname(std::string input);
		void		set_lastname(std::string input);
		void		set_nickname(std::string input);
		void		set_phonenumber(std::string input);
		void		set_darkestsecret(std::string input);

		void		display();

	private:
		std::string	firstname;
		std::string lastname;
		std::string nickname;
		std::string phonenumber;
		std::string darkestsecret;
};
