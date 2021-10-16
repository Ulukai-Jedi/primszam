#include <iostream>

int main() {
	int p, d;
	bool isPrime;

	for (p = 2; p <= 50; p++) {
		isPrime = true;
		for (d = 2; d < p; d++)
			if (p % d == 0)
				isPrime = false;
		if (isPrime == true)
			std::cout << p << std::endl;
	}
	return 0;
}