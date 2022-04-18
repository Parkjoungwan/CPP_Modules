#include "Span.hpp"

Span::Span(): max(0)
{
}

Span::Span(const unsigned int	&num) : max(num)
{
}

Span::Span(const Span	&other) : max(other.max)
{
	*this = other;
}

Span::~Span()
{
	return ;
}

Span	&Span::operator=(const Span	&other)
{
	if (this != &other)
	{
		vec = other.vec;
	}
	return (*this);
}

void	Span::addNumber(const int	&num)
{
	if (vec.size() == max)
		throw std::range_error("Array is full.");
	vec.push_back(num);
}

int		Span::shortestSpan() const
{
	int result;
	std::vector<int> temp = vec;
	
	if (vec.size() < 2)
		throw std::range_error("Not enough elements.");
	sort(temp.begin(), temp.end());
	result = (temp[1] - temp[0]);
	for (std::vector<int>::iterator it = temp.begin() + 1; it < temp.end() - 1; it++)
	{
		int span = *(it + 1) - *it;
		if ( span < result)
			result = span;
	}
	return (result);
}

int		Span::longestSpan() const
{
	std::vector<int> temp = vec;
	
	if (vec.size() < 2)
		throw std::range_error("Not enough elements.");
	sort(temp.begin(), temp.end());
	return (*(temp.end() - 1) - *temp.begin());
}
