#ifndef	WHATEVER_HPP
#define WHATEVER_HPP

template<typename	T> void	swap(T &a, T &b)
{
	T	save;

	save = b;
	b = a;
	a = save;
}

template<typename T> const T	&max(T const	&x, T const	&y)
{
	return (x > y ? x : y);
}

template<typename T> const T	&min(T const	&x, T const	&y)
{
	return (x < y ? x : y);
}

#endif	
