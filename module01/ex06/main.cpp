#include "Karen.hpp"

int main(int argc, char **argv) {
	if (argc > 1 && argc < 3) {
		Karen karen;
		karen.complain(argv[1]);
	}
	return (0);
}