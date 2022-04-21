#ifndef	EASYFIND_HPP
#define	EASYFIND_HPP

# include <iostream>
# include <algorithm>

template<typename	T>
const int	&easyfind(const T	&array, int val)
{
	typename T::const_iterator	it = std::find(array.begin(), array.end(), val);
	if (it == array.end())
		throw std::out_of_range("There is no value what you find.");
	return (*it);
}
#endif
