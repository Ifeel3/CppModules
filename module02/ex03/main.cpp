#include "Point.hpp"

int main()
{
	Point	a(4.6f, -1.02f);
	Point	b(6.3f, 4.38f);
	Point	c(12.14f, 2.58f);

	Point	d(7.78f, 2.38f);
	Point	e(10.85f, 1.96f);
	Point	f(4.72f, 0.24f);

	std::cout << (bsp(a, b, c, d) ? "true" : "false") << std::endl;	// true
	std::cout << (bsp(a, b, c, e) ? "true" : "false") << std::endl;	// false
	std::cout << (bsp(a, b, c, f) ? "true" : "false")<< std::endl;	// false

	Point g(3.0f, 1.0f);
	Point h(-6.5f, 6.4f);
	Point j(-2.0f, -4.0f);
	Point point(2.9f, 1.0f);

	std::cout << (bsp(g, h, j, point) ? "true" : "false") << std::endl;

	return 0;
}
