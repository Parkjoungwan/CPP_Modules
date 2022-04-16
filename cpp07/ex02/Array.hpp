#ifndef	ARRAY_HPP
#define	ARRAY_HPP
#include <iostream>

template<typename T> class Array
{
	public:
		Array() : data(NULL), arraySize(0) {}
		Array(const unsigned int num) : data(new T[num]), arraySize(num) {}
		Array(const Array<T> &array) : data(NULL), arraySize(0) {*this = array;}
		virtual ~Array() { delete [] data;}

		Array<T>		&operator=(const Array<T> &array)
		{
			if (this != &array)
			{
				if (arraySize > 0)
					delete	[]data;
				arraySize = array.arraySize;
				data = new T[array.arraySize];
				for (unsigned int i = 0; i < arraySize; i++)
					data[i] = array.data[i];
			}
			return (*this);
		}
		T				&operator[](const int i) const
		{
			if (i < 0 || static_cast<unsigned int>(i) >= arraySize)
				throw OutOfRangeException();
			return (data[i]);
		}
		unsigned int	size() const {return (arraySize);}

		class OutOfRangeException : public std::exception
		{
			public:
				virtual const char	*what() const throw()
				{
					return ("Array index is out of range");
				}
		};
	private:
			T	*data;
			unsigned int	arraySize;
};

#endif
