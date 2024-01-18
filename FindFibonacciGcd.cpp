#include "pch.h"
#include "FindFibonacciGcd.h"

uint32_t gcd(uint32_t a, uint32_t b) {
	if (a == 0)
		return b;
	return gcd(b % a, a);
}
uint32_t fibonacci(uint32_t n) {
	if (n <= 0)
		return 0;
	if (n == 1)
		return 1;
	return fibonacci(n - 1) + fibonacci(n - 2);
}
uint32_t findFibonacciGcd(uint32_t n, uint32_t m) {
	uint32_t x = gcd(fibonacci(n), fibonacci(m));
	for (uint32_t i = 0; i < (2 << 16); i++){
		if(x == fibonacci(i))
			return i;
	}
	return -1;
}