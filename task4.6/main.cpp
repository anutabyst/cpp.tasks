#include <iostream>


const char* ones[] = {"", "один", "два", "три", "чотири", "п’ять", "шість", "сім", "вісім", "дев’ять"};
const char* teens[] = {"десять", "одинадцять", "дванадцять", "тринадцять", "чотирнадцять",
                       "п’ятнадцять", "шістнадцять", "сімнадцять", "вісімнадцять", "дев’ятнадцять"};
const char* tens[] = {"", "десять", "двадцять", "тридцять", "сорок", "п’ятдесят",
                      "шістдесят", "сімдесят", "вісімдесят", "дев’яносто"};
const char* hundreds[] = {"", "сто", "двісті", "триста", "чотириста", "п’ятсот",
                          "шістсот", "сімсот", "вісімсот", "дев’ятсот"};

void numberToWords(int n) {
    if (n == 1000) {
        std::cout << "тисяча" << std::endl;
        return;
    }

    if (n < 1 || n > 1000) {
        std::cout << "Число поза допустимим діапазоном!" << std::endl;
        return;
    }

    if (hundreds[n / 100][0] != '\0') { 
        std::cout << hundreds[n / 100] << " ";
    }

    int lastTwoDigits = n % 100;
    if (lastTwoDigits >= 10 && lastTwoDigits <= 19) {
        std::cout << teens[lastTwoDigits - 10] << std::endl;
    } else {
        if (tens[lastTwoDigits / 10][0] != '\0') { 
            std::cout << tens[lastTwoDigits / 10] << " ";
        }
        if (ones[lastTwoDigits % 10][0] != '\0') { 
            std::cout << ones[lastTwoDigits % 10] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;
    std::cin >> n;
    numberToWords(n);
    return 0;
}


