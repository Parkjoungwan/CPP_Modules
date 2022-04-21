#ifndef	MUTANTSTACK_HPP
#define	MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename	T>
class	MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>() {}
		MutantStack(const MutantStack<T>	&other) : std::stack<T>(other) {}
		~MutantStack() {}

		MutantStack<T>	&operator=(const MutantStack<T>	&other)
		{
			new (this) MutantStack(other);
			return (*this);
		}
		typedef	typename MutantStack<T>::container_type::iterator				iterator;
		typedef typename MutantStack<T>::container_type::const_iterator			const_iterator;
		typedef	typename MutantStack<T>::container_type::reverse_iterator		reverse_iterator;
		typedef	typename MutantStack<T>::container_type::const_reverse_iterator	const_reverse_iterator;
		iterator			begin() {return (this->c.begin());}
		iterator			end() {return (this->c.end());}
		reverse_iterator	rbegin() {return (this->c.rbegin());}
		reverse_iterator	rend() {return (this->c.rend());}
};
#endif
