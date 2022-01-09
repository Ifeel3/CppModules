#include "span.hpp"

Span::Span(unsigned int size) : data_(0), maxSize_(size) {}

Span::Span(const Span &copy) : data_(copy.data_), maxSize_(copy.maxSize_) {}

Span &Span::operator=(const Span &copy) {
	maxSize_ = copy.maxSize_;
	data_ = copy.data_;
	return *this;
}

std::ostream& operator<<(std::ostream& out, const Span& span) {
	for(unsigned int i = 0; i < span.data_.size(); i++) {
		out << "Span[" << i << "] = " << span.data_[i] << std::endl;
	}
	return out;
}

void Span::addNumber(int number) {
	if (data_.size() < maxSize_)
		data_.push_back(number);
	else
		throw SpanMax();
	std::sort(data_.begin(), data_.end());
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	if ((data_.size() + static_cast<unsigned int>(end - begin)) > maxSize_) {
		throw SpanMax();
	}
	else
		data_.insert(data_.end(), begin, end);
	std::sort(data_.begin(), data_.end());
}

int Span::longestSpan() const {
	if (data_.size() >= 2)
		return (*(data_.end() - 1) - *data_.begin());
	else
		throw SpanIsFew();
}

int Span::shortestSpan() const {
	if (data_.size() >= 2) {
		int shortSpan = longestSpan();
		std::vector<int>::const_iterator it1 = data_.begin();
		std::vector<int>::const_iterator it2;
		for (; it1 < data_.end(); it1++) {
			for (it2 = it1 + 1; it2 < data_.end(); it2++) {
				if (std::abs(*it1 - *it2) < shortSpan) {
					shortSpan = std::abs(*it1 - *it2);
				}
			}
		}
		return shortSpan;
	}
	else
		throw SpanIsFew();
}



