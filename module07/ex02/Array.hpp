#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template <class T>
class Array {
private:
	T *data_;
	unsigned int size_;
public:
	Array() : data_(NULL), size_(0) {};

	Array(unsigned int size) : data_(new T[size]), size_(size) {};

	Array(const Array& copy) {
		data_ = new T[copy.size_];
		size_ = copy.size_;
		for (unsigned int i = 0; i < size_; i++)
			data_[i] = copy.data_[i];
	};

	~Array() {
		delete[] data_;
	}

	Array& operator=(const Array& copy) {
		if (data_)
			delete[] data_;
		data_ = new T[copy.size_];
		size_ = copy.size_;
		for (unsigned int i = 0; i < size_; i++)
			data_[i] = copy.data_[i];
		return *this;
	}

	T& operator[](const unsigned int index) {
		if (index < 0 || index > size_)
			throw exceptionIndex();
		return data_[index];
	}

	unsigned int size(void) const {
		return size_;
	}

	class exceptionIndex : public std::exception {
		const char *what() const throw() {
			return "Error: out of limit";
		};
	};
};

#endif