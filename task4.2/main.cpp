#include <iostream>

/*Трикутником Паскаля називають числову конструкцію, у якiй перший
стовпчик мiстить тiльки одиницi, а всi iншi елементи дорівнюють сумі тих
двох, що стоять у попередньому рядку над елементом i зліва вiд нього.
Побудувати перші n рядків трикутника Паскаля.*/

#include <iostream>
#include <vector>


void printPascalsTriangle(int n) {
    std::vector<std::vector<int>> triangle(n); // Зберігаємо трикутник у векторі векторів

    for (int i = 0; i < n; ++i) {
        triangle[i].resize(i + 1); // Кожен рядок має i + 1 елементів
        triangle[i][0] = 1;        // Перший елемент завжди дорівнює 1
        triangle[i][i] = 1;        // Останній елемент завжди дорівнює 1

        // Обчислюємо проміжні елементи
        for (int j = 1; j < i; ++j) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    // Виведення трикутника Паскаля
    for (int i = 0; i < n; ++i) {
        // Додаємо пробіли для вирівнювання
        for (int k = 0; k < n - i - 1; ++k) {
            std::cout << " ";
        }
        // Виводимо елементи рядка
        for (int j = 0; j <= i; ++j) {
            std::cout << triangle[i][j] << " ";
        }
        std::cout << "\n";
    }
}

int main() {
    int n;
    std::cout << "n=";
    std::cin >> n;

    printPascalsTriangle(n);

 
}

