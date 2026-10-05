#include <iostream>

int fib(int n) {
	if (n <= 0) return 0;
	if (n == 1) return 1;
	return fib(n - 1) + fib(n - 2);
}

int main() {
	int n;
	std::cout << "Введите n: ";
	if (!(std::cin >> n) || n < 0) {
		std::cout << "Ошибка ввода или отрицательное значение.\n";
		return 1;
	}
	
	std::cout << "Fibonachi (" << n << ") = " << fib(n) << "\n";
	return 0;
}
