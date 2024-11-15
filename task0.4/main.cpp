#include <iostream>
using namespace std;
/*Напишіть програму для обчислення площі круга та довжини кола із
заданим радіусом R. Прийміть значення pi = 3,14. Перерахуйте
отримані значення з точністю до 2 знаків після коми.
S=pi*r^2
C=2*pi*r
*/
int main(){

double r, pi, S, C;
pi=3.14;
cout<< "r=";
cin>>r;
S=pi*r*r;
cout<< " S="<< S << endl;
C=2*pi*r;
cout <<" C="<< C << endl;



} 
