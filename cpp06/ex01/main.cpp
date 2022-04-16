#include <iostream>

typedef struct	s_Data
{
	std::string	words;
	int			number;
}				Data;

uintptr_t		serialize(Data	*ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data			*deserialize(uintptr_t	raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int				main()
{
	Data		data = {"Apple", 42};
	uintptr_t	uin;
	Data		*after_cast;

	std::cout << "Before: " << data.number << " " << data.words << std::endl;

	uin = serialize(&data);
	std::cout << "uinptr: " << uin << std::endl;

	after_cast = deserialize(uin);
	std::cout << "After: " << after_cast->number << " " << after_cast->words << std::endl;
}
