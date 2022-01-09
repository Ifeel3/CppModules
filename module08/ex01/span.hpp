#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <vector>

class Span {
private:
	std::vector<int> data_;
	unsigned int maxSize_;

public:
	Span(unsigned int size);
	Span(const Span& copy);
	Span& operator=(const Span& copy);
	friend std::ostream& operator<<(std::ostream& out, const Span& span);
	void addNumber(int number);
	void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int shortestSpan(void) const;
	int longestSpan(void) const;
};

class SpanMax : public std::exception {
	const char* what() const throw() {
		return "Span is max size";
	};
};

class SpanIsFew : public std::exception {
	const char* what() const throw() {
		return "Too few of span";
	}
};
#endif