#ifndef BASE_HPP
# define BASE_HPP
# include <iostream>
# include <ctime>

class Base {
public:
	virtual ~Base() {};
};

class A : public Base {
public:
	A() { std::cout << "A class" << std::endl; };
};

class B : public Base {
public:
	B() { std::cout << "B class" << std::endl; };
};

class C : public Base {
public:
	C() { std::cout << "C class" << std::endl; };
};

#endif