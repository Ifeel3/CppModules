template <typename ADDR, typename LEN>
void iter(ADDR *array, LEN length, void (*func)(ADDR &)) {
	for (LEN i = 0; i < length; i++)
		func(array[i]);
}

template <typename NUM>
void inc(NUM& number) {
	number++;
}