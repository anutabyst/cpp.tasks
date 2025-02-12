/*Розкласти число на добуток простих множників. Відповідь подати у
вигляді переліку знайдених множників, наприклад: 250 = 2, 5, 5, 5.*/

#include <iostream>
using namespace std;

void factorize(int n) {
    for (int i = 2; i * i <= n; i++) { 
        while (n % i == 0) {
		std::cout << i << ", ";  
            n /= i;  
        }
    }
    if (n > 1) {
	    std::cout << n << std::endl;
    }
}

int main() {
    int n;
    std::cin >> n;
    factorize(n);

    return 0;
}

