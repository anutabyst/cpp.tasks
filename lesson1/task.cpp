#include  <iostream>

struct vector
{
	int size;
	vector(){
		std::cout << "callvector" << std::endl;
	}
	~vector(){
                std::cout << "~callvector" << std::endl;
        }

	int get_size(){
	return size;
	};
};

int main ()
{
	{
	vector v;
	v.size=10;
	std::cout << v.size << " " << v.get_size() << std::endl;
	}
	vector p;
        p.size=5;
        std::cout << p.size << " " << p.get_size() << std::endl;
}


