/*Задано текст i натуральне число n > 50. Відредагувати текст так, щоб його
ширина становила n символiв. Абзаци слід зберегти як два символи нового
рядка*/
#include <iostream>

int main() {
    const int MAX_N = 1000;
    char text[MAX_N]; 
    int n; 

    std::cin >> n;
    std::cin.ignore();

    if (n <= 50) {
        std::cout << "Width must be greater than 50!\n";
        return 0 ;
    }

    std::cout << "Enter text (max 1000 characters):\n";
   // std::cin.getline(text, MAX_N);
	while (std::cin.getline(text, MAX_N)) std::cout << text << " ";

    int lineLength = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == '\n') {
            std::cout << "\n\n";
            lineLength = 0;
        } else {
            if (lineLength >= n) { 
                std::cout << '\n';
                lineLength = 0;
            }
            std::cout << text[i];
            lineLength++;
        }
    }

    return 0;
}
