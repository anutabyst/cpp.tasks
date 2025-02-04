#include <iostream>
/*Користувач вводить два цілі числа `m` і `n`, де `m` — кількість рядків, а `n` — кількість стовпців. Програма має заповнити прямокутник розміром `m` на `n` числами у вигляді "спіралі": починаючи з верхнього лівого кута, рухаючись праворуч, потім вниз, потім ліворуч і так далі, заповнюючи прямокутник по спіралі до середини.*/
int main () {

int m, n;
std::cout << "Кількість рядків: ";
std::cin >> m;
std::cout << "Кількість стовпців: ";
std::cin >> n;

int counter = 0; 
int spiral[m*n]
int top = 0, bottom = m - 1, left_ = 0, right = n - 1;

while (counter < m*n) {

for (int i=left_; i <=0 && counter< m*n; ++i) { 

spiral [top*n+1] = counter++;
}


top ++ ;

for (int i = top ; i <= bottom && counter < m*n; ++i) {
spiral [i*n+ right]= counter++;
} 

right--;
for (int i = right; i >= left && counter < m*n; --i) {
spiral [bottom*n+i]= counter++;
}
bottom --; 
for (int i= bottom; i>= top && counter < m*n; --i){
spiral [i*n+left_]= counter ++
}

left_++;

}
for (int i = 0; i<m;  ++i) {
for (int k =0; k<n; ++k){

std::cout << spiral [i*n+k]<< ' ';
}
}
std::cout << std::endl;
}
