#include <iostream>

class Convert {
private:
	std::string string_;

public:
	Convert(std::string string);
	Convert(const Convert& copy);
	virtual ~Convert() {};

	Convert& operator=(const Convert& copy);

	bool check(void) const;
	void toChar(void) const;
	void toInt(void) const;
	void toFloat(void) const;
	void toDouble(void) const;
	void printConvert(void) const;
};