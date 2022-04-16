#include "Convert.hpp"

Convert::Convert(const char *input)
{
	this->input = input;
}

Convert::Convert( Convert const &other )
{
	*this = other;
}

Convert::~Convert()
{
}

Convert const	&Convert::operator=(Convert const	&other)
{
	if (this != &other)
		this->input = other.input;
	return (*this);
}

char	Convert::getChar() const
{
	char	result;

	try
	{
		result = static_cast<char>(std::stoi(this->input));
	}
	catch(const std::exception	&err)
	{
		throw Convert::ImpossibleException();
	}

	if (result < 32 || result > 126)
		throw Convert::NonDisplayableException();
	return (result);
}

int		Convert::getInt() const
{
	int		result = 0;

	try
	{
		result = std::stoi(this->input);
	}
	catch(const std::exception	&err)
	{
		throw Convert::ImpossibleException();
	}
	return (result);
}

float	Convert::getFloat() const
{
	float	result	= 0;

	try
	{
		result = std::stof(this->input);
	}
	catch(const std::exception	&err)
	{
		throw Convert::ImpossibleException();
	}
	return (result);
}

double	Convert::getDouble() const
{
	double	result = 0;

	try
	{
		result = static_cast<double>(std::stof(this->input));
	}
	catch(const std::exception	&err)
	{
		throw Convert::ImpossibleException();
	}
	return (result);
}

const char	*Convert::NonDisplayableException::what() const throw()
{
	return ("Non displayable");
}

const char	*Convert::ImpossibleException::what() const throw()
{
	return ("Impossible");
}

std::ostream	&operator<<(std::ostream	&out, Convert const	&convert)
{
	try
	{
		out << "char: ";
		char c = convert.getChar();
		out << "\'" << c << "\'" << std::endl;
	}
	catch (const std::exception	&err)
	{
		out << err.what() << std::endl;
	}

	try
	{
		out << "int: " << convert.getInt() << std::endl;
	}
	catch (const std::exception	&err)
	{
		out << err.what() << std::endl;
	}

	try
	{
		out << "float: " << convert.getFloat();
		if (convert.getFloat() - static_cast<int>(convert.getFloat()) == 0)
			out << ".0";
		out << "f" << std::endl;
	}
	catch (const std::exception	&err)
	{
		out << err.what() << std::endl;
	}

	try
	{
		out << "double: " << convert.getDouble();
		if (convert.getDouble() - static_cast<int>(convert.getFloat()) == 0)
			out << ".0";
	}
	catch (const std::exception	&err)
	{
		out << err.what();
	}
	return (out);
}
