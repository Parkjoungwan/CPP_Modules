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

void	Span::addNumbers(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
	unsigned int	left = max - vec.size();
	std::vector<int>::iterator	lastLast;
	unsigned int	old_size = vec.size();
	bool	check = false;
	if (left < (last - first))
	{
		lastLast = first + left;
		check = true;
		vec.resize(max);
	}
	else
	{
		lastLast = last;
		vec.resize(old_size + (last - first));
	}
	std::vector<int>::iterator copyStart = vec.begin() + old_size;
	std::copy(first, lastLast, copyStart);
	if (check)
		throw std::range_error("too many elements, copy partly");
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
