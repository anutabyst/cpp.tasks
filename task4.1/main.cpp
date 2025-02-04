#include <iostream>
/*Знайти всi трiйки цілих чисел a, b, c, що не перевищують n i
задовольняють рівняння a^2+b^2=c^2*/


void findPythagoreanTriples(int n) {
	for (int a = 1; a <= n; ++a) {
        for (int b = a; b <= n; ++b) { 
            int cSquared = a * a + b * b;
            int c = 1;
             
    while (c * c < cSquared) {
    ++c;
    }
    if (c * c == cSquared && c <= n) {
    std::cout << "(" << a << ", " << b << ", " << c << ")\n";}
}
}
}

int main() {
    int n;
    std::cout << "Введіть максимальне значення n: ";
    std::cin >> n;

    std::cout << "Піфагорові трійки:\n";
    findPythagoreanTriples(n);

}


