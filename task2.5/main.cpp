#include <iostream>
using namespace std;
/*Напишіть програму, яка читає дійсне число з точністю до одного знака
після коми. Це число має бути в діапазоні 0,0...9,0 і виражати кількість
балів із тесту.
Програма, використовуючи умовний оператор if-else, видає (друкує на
екран) результат цих точок за такою схемою:
0,0 ... 4,4 – незадовільна оцінка (2,0),
4,5 ... 5,2 – задовільний (3,0),
5,3 ... 6,2 – оцінка вище задовільно (3,5),
6,3 ... 7,2 – хороша оцінка (4,0),

7,3 ... 8,2 – оцінка вище добре (4,5),
8,3 ... 9,0 – дуже добре (5,0)
В інших випадках відображається повідомлення «Неправильна
кількість пунктів!».*/


int main (){
float score; 
cout << "Введіть кількість балів (від 0.0 до 9.0): ";
cin >> score;
if (score >= 0.0 && score <= 4.0)
{ cout <<"незадовільна оцінка (2,0)" << endl;}
else if (score >= 4.5 && score <= 5.2)
{ cout <<" задовільний (3,0)" << endl;}
else if (score >= 5.3 && score <= 6.2)
{ cout <<"оцінка вище задовільно (3,5)" << endl;}
else if (score >= 6.3 && score <= 7.2)
{ cout <<"оцінка вище добре (4,5)" << endl;}
else if (score >= 7.3 && score <= 8.2)
{ cout <<"оцінка вище добре (4,5)" << endl;}
else if (score >= 8.3 && score <= 9.0)
{ cout <<"дуже добре (5,0)" << endl;}
else if  (score > 9.0)
{ cout <<"Неправильна кількість пунктів!" << endl;}

}
