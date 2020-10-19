#include <memory>
#include "nutility.h"
#include "triple.h"
#include <iostream>

using namespace std;

void func()
{
	throw std::exception{};
}

int main()
{
	std::cout << "main basladi\n";


	try {
		unique_ptr<Triple>upx(new Triple{ 10, 20, 30 });

		cout << (upx ? "dolu" : "bos") << "\n";
		cout << *upx << "\n";
		upx->set(3, 6, 7);
		func();
		cout << *upx << "\n";
		cout << "blok sonu\n";
	}
	catch (const std::exception& ex) {
		std::cout << "hata yakalandi\n";

	}

	std::cout << "main devam ediyor\n";
}
