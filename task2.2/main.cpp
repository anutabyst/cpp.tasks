#include  <iostream> 
using namespace std;
/*Напишіть програму, яка завантажує два числа з вибраною точністю, а
потім обчислює та друкує результати (сума, різниця, добуток і частка) з
точністю до 12 знаків після коми.*/

int main (){
double num1, num2;

cout <<" Enter the first number:";
cin >> num1;
cout <<" Enter the second  number:";
cin >> num2;

double сума = num1 + num2;
double різниця = num1 - num2;
double добуток = num1 * num2;
double частка = num1/num2;

cout << " сума = " << (int) (сума * 1000000000000)/ 100000000000.0 << endl;

}	
