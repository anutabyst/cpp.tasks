#include <iostream>

int main() {
int n;
std::cin >> n;

   
for (int i = 0; i < n; ++i) {
for (int j = 0; j < n; ++j) {
if (j == i || j == n / 2 || j == n - i - 1) {
std::cout << "* ";
}
else {
std::cout << "  ";
}
}
std::cout << std::endl;



}
}
