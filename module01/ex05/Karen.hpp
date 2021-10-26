#ifndef KAREN_HPP
# define KAREN_HPP
# include <iostream>

class Karen {
public:
	Karen(void);
	~Karen(void);
	void complain(std::string level);

private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

	std::string levels[4];
	typedef void (Karen::*Methods) (void);
	Methods methods[4];
};
#endif