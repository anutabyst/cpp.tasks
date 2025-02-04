#include <iostream> 
 
int main () {

int a[6];
a [0]= 3;
a [2]=5;
a [4]=7;

std::cout<< "*(a+2)"<< *(a+2) << std::endl;

for (int i = 0; i < 6; i=i+1)
	{
		a [i]=2;
	}
for ( int i = 0; i<6; i=i+1 )
	{
		std::cout<< a [i]<< std::endl;
	}


struct point {
	
	int x;
	int y;
	int z;

	};
point p;
p.x = 0;
p.y = 1;
p.z = 1;

std::cout << "point p=" << p.x << std::endl;
point k [10];
std::cout << "point k=" << k[7].y << std::endl;

int b= 8;
std::cout<< "b =" << b << std::endl;

int &c = b;
c = 9;
std::cout<< "b =" << b << std::endl;
std::cout<< "c =" << c << std::endl;

std::cout<< "&b =" << &b << std::endl;
std::cout<< "&c =" << &c << std::endl;



int *d;
d = &c;
std::cout<< "d =" << d << std::endl;

point* e;
e = &p;
std::cout<< "e =" << e << std::endl;

double f = 3.14;
double *g =&f;
std::cout<< "d=\t" << d << std::endl;
std::cout<< "d+1=\t" << d+1 << std::endl;
std::cout<< "g=\t" << g << std::endl;
std::cout<< "g+1=\t" << g+1 << std::endl;

std::cout<< "*d=\t" << *d << std::endl;
std::cout<< "*g=\t" << *g << std::endl;


}

