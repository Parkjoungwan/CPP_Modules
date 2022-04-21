#ifndef	SPAN_HPP
#define	SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
	public:
		Span(const unsigned int	&num);
		Span(const Span	&other);
		virtual ~Span();

		Span	&operator=(const Span	&other);

		void	addNumber(const int	&num);
		void	addNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end);
		int		shortestSpan() const;
		int		longestSpan() const;
	private:
		Span();

		std::vector<int>	vec;
		const unsigned int	max;
};

#endif
