#include <iostream>
using namespace std;
/*Напишіть програму для розрахунку простих відсотків для конкретного
клієнта банку для заданої суми P (плаваючого типу), періоду позики T
(int) і процентної ставки R (плаваючої). Результатом є значення виразу I
= (P * T * R )/100. Виведіть результат і як float, і як int. Відобразіть
результат як дійсне значення з точністю до двох знаків після коми.
*/
int main(){

float P, R, I;
int T;

cout << "P=";
cin >> P;
cout << "T=";
cin >> T;
cout << "R=";
cin >> R;
I= (P * T * R )/100;
cout << " простих відсотків (як float) =" << I << endl; 
cout << " простих відсотків (як int) =" << int (I) << endl;


}

