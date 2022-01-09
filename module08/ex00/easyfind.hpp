#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <algorithm>

template <typename T>
typename T::iterator easyfind(T& container, int data) {
	typename T::iterator tmp = std::find(container.begin(), container.end(), data);
	if (tmp == container.end())
		throw "Not found";
	return tmp;
};

#endif