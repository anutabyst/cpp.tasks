#include <iostream>
using namespace std;
/*Напишіть програму, яка завантажує символ у змінну char, а потім
друкує символ та його ASCII-код у десятковому та шістнадцятковому
форматі на екран */

int main (){
char symbol;
cout << "символ:";
cin >> symbol;

cout << "символ:"<< symbol << endl;
cout <<" ASCII-код у десятковому форматі:" << int (symbol) << endl;
cout << "ASCII-код у шістнадцятковому форматі:" << hex <<  int (symbol) << endl;
}
