#include <memory>
#include "triple.h"
#include <iostream>

int main()
{
	using namespace std;

	auto upx = make_unique<Triple>(10, 30, 56);
	auto upy = make_unique<Triple>(-6, -1, -20);

	cout << "upx = " << (upx ? "dolu" : "bos") << "\n";
	cout << "upy = " << (upy ? "dolu" : "bos") << "\n";
	cout << "*upx = " << *upx << "\n";
	cout << "*upy = " << *upy << "\n";
	getchar();
	upx = move(upy);
	cout << "upx = " << (upx ? "dolu" : "bos") << "\n";
	cout << "upy = " << (upy ? "dolu" : "bos") << "\n";
	getchar();
}
