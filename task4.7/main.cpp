/*Між n та 2n знайти всі пари простих чисел, різниця яких дорівнює 2*/

#include <iostream>

const int MAX = 2000; 
bool isPrime[MAX + 1];

void sieve(int limit) {
    for (int i = 0; i <= limit; i++) isPrime[i] = true;
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= limit; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= limit; j += i) {
                isPrime[j] = false;
            }
        }
    }
}


void findTwinPrimes(int n) {
    sieve(2 * n); 
    for (int i = n; i <= 2 * n - 2; i++) {
        if (isPrime[i] && isPrime[i + 2]) {
	std::cout << "(" << i << ", " << i + 2 << ")" << std::endl;	
        }
    }
}

int main() {
    int n;
    std::cout << "Введіть n: ";
    std::cin >> n;

    if (n < 2 || n > 1000) {
        std::cout << "Введіть n у межах 2 ≤ n ≤ 1000!" << std::endl;
        return 0;
    }

    findTwinPrimes(n);
    return 0;
}

