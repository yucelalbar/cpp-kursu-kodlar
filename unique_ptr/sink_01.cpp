#include "triple.h"
#include <memory>
#include <iostream>


//sink
void func(std::unique_ptr<Triple> uptr)
{
	// code
	std::cout << *uptr << "\n";
	// code
}

int main()
{
	func(std::make_unique<Triple>(1, 5, 6));
	std::getchar();
	std::cout << "main devam ediyor\n";
}
