#include <iostream>
using namespace std;
/*Напишіть програму, яка:
- друкує таке повідомлення на екрані: "Enter the name: ",
- вчитує ім'я користувача з клавіатури,
- друкує на екрані повідомлення: "Hello...!" і виводить ім’я */
int main(){

string name;
cout << "Enter the name: ";
getline( cin, name);
cout<< "Hello"<< " "<< name << "!"<< endl;

}
