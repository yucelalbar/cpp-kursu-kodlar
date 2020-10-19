#include <memory>
#include "triple.h"
#include <iostream>

using namespace std;

int main()
{
	std::cout << "main basladi\n";
	Triple* ptr = new Triple{ 1, 2, 3 };
	std::cout << "ptr = " << ptr << "\n";
	unique_ptr<Triple> up{ ptr };
	cout << up << "\n";
	cout << up.get() << "\n";
}

