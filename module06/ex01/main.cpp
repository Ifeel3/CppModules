#include <iostream>

struct Data {
	std::string string;
};

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}

int main(int argc, char** argv) {
	if (argc != 2) {
		std::cout << "Wrong number of arguments." << std::endl;
		return 1;
	}
	Data *structure = new Data;
	structure->string = argv[1];
	uintptr_t tmp = serialize(structure);

	std::cout << "ptr: " << structure << std::endl;
	std::cout << "str: " << structure->string << std::endl;
	std::cout << "--------" << std::endl;
	std::cout << "ptr: " << deserialize(tmp) << std::endl;
	std::cout << "str: " << deserialize(tmp)->string << std::endl;
}