#include "Base.hpp"

Base* generate(void) {
	srand(time(NULL));
	switch(rand() % 3) {
		case 0:
			return new A;
			break;
		case 1:
			return new B;
			break;
		default:
			return new C;
	}
}

void identify(Base* p) {
	if (dynamic_cast<A *>(p)) {
		std::cout << "Created A class" << std::endl;
	}
	else if (dynamic_cast<B *>(p)) {
		std::cout << "Created B class" << std::endl;
	}
	else if (dynamic_cast<C *>(p)) {
		std::cout << "Created C class" << std::endl;
	}
}

void identify(Base& p) {
	try {
		Base& tmp = dynamic_cast<A &>(p);
		std::cout << "Created A class" << std:: endl;
		(void) tmp;
	}
	catch (std::bad_cast &e) {}
	try {
		Base& tmp = dynamic_cast<B &>(p);
		std::cout << "Created B class" << std:: endl;
		(void) tmp;
	}
	catch (std::bad_cast &e) {}
	try {
		Base& tmp = dynamic_cast<C &>(p);
		std::cout << "Created C class" << std:: endl;
		(void) tmp;
	}
	catch (std::bad_cast &e) {}
}

int main(void) {
	Base* tmp = generate();
	std::cout << "-----" << std::endl;
	identify(tmp);
	std::cout << "-----" << std::endl;
	identify(*tmp);
	delete tmp;
}