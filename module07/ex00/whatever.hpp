template <typename TMP>
void swap(TMP& a, TMP& b) {
	TMP tmp = a;
	a = b;
	b = tmp;
}

template <typename TMP>
TMP min(const TMP& a, const TMP& b) {
	return (a <= b) ? a : b;
}

template <typename TMP>
TMP max(const TMP& a, const TMP& b) {
	return (a >= b) ? a : b;
}