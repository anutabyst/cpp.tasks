#include <iostream>
using namespace std;
 /*Напишіть програму, яка перевірятиме, чи є задане ціле число в
десятковій системі парним числом і чи ділиться воно на 8 і 16.
Програма виводить подільність зі словами «ТАК» і «НІ» та виводить
задане число у вісімковому форматі. і шістнадцятковій формі.*/

int main (){

int number;

cout << "ціле число:";
cin >> number;
cout << "чи ділиться воно на 2 ? -";
if ((number / 2) * 2 == number)
{
	cout << "ТАК"<< endl;
}
else 
{
	cout << "НІ"<< endl;
}
cout << "чи ділиться воно на 8 ? -";
if ((number / 8) * 8 == number)
{
        cout << "ТАК"<< endl;
}
else
{
        cout << "НІ"<< endl;
}
cout << "чи ділиться воно на 16 ? -";
if ((number / 16) * 16 == number)
{
        cout << "ТАК"<< endl;
}
else
{
        cout << "НІ"<< endl;
}
cout <<"у вісімковому форматі:" << oct << number << endl;
cout <<"у  шістнадцятковій формі:" << hex << number << endl;}

