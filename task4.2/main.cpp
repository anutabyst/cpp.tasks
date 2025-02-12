/*
1
1  1
1  2  1
1  3  3  1
1  4  6  4  1
1  5  10 10 5  1
1  6  15 20 15 6  1
* Трикутником Паскаля називають числову конструкцію, у якiй перший
стовпчик мiстить тiльки одиницi, а всi iншi елементи дорівнюють сумі тих
двох, що стоять у попередньому рядку над елементом i зліва вiд нього.
Побудувати перші n рядків трикутника Паскаля.
*/
#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int** col = new int*[n];
    for (int i = 0; i < n; i++) {
        col[i] = new int[i + 1];
        col[i][0] = col[i][i] = 1; 

        for (int j = 1; j < i; j++) {
            col[i][j] = col[i - 1][j - 1] + col[i - 1][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            std::cout << col[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < n; i++) {
        delete[] col[i];
    }
    delete[] col;

    return 0;
}

