#include <fstream>
#include <string>
#include <iostream>
#include <cstdlib>
#include <cctype>

int	errorMsg(std::string msg)
{
	std::cout << msg << std::endl;
	return (1);
}

std::string	makeReplace(std::string	buf, std::string to_find, std::string to_replace)
{
	std::size_t	found = 0;
	while ((found = buf.find(to_find)) != std::string::npos)
	{
		buf.erase(found, to_find.length());
		buf.insert(found, to_replace);
	}
	return (buf);
}

int	main(int argc, char **argv)
{
	std::string	to_find;
	std::string	to_replace;
	std::string	file_name;
	std::string	new_filename;
	std::string	buf;
	std::string	tmp;

	if (argc != 4)
		return (errorMsg("Wrong arguments: ./replace [filename] [to_find] [t_replace]"));
	file_name = argv[1];
	to_find = argv[2];
	to_replace = argv[3];
	if (to_find.empty() || to_replace.empty())
		return (errorMsg("Wrong arguments: String empty!"));
	if (!to_find.compare(to_replace))
		return (errorMsg("Wrong arguments: String same!"));
	std::ifstream ifs(argv[1]);
	if (!ifs.is_open())
		return (errorMsg("File: Input file can't open!"));
	new_filename = file_name;
	new_filename += ".replace";
	std::ofstream	ofs(new_filename);
	if (!ofs.is_open())
		return (errorMsg("File: Output file can't open!"));
	while (getline(ifs, buf))
	{
		tmp = makeReplace(buf, to_find, to_replace);
		ofs << tmp << std::endl;
	}
	ifs.close();
	ofs.close();
	return (0);
}
