#include <iostream>

long long fib_dp_array(int n) {
	if (n <= 0) return 0;
	if (n == 1) return 1;
	
	long long* arr = new long long[n + 1];
	
	arr[0] = 0;
	arr[1] = 1;
	
	for (int i = 2; i <= n; ++i) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	
	long long result = arr[n];
	
	delete[] arr;
	return result;
}

int main() {
	int n;
	std::cout << "Введите n: ";
	if (!(std::cin >> n) || n < 0) {
		std::cout << "Ошибка ввода или отрицательное значение.\n";
		return 1;
	}
	
	std::cout << "Fibonachi(" << n << ") = " << fib_dp_array(n) << "\n";
	return 0;
}

