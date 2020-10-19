#include <iostream>
#include "triple.h"

int main()
{
	using namespace std;
	auto upx = make_unique<Triple>(10, 30, 56);

	cout << "upx = " << (upx ? "dolu" : "bos") << "\n";

	auto upy = move(upx);
	getchar();

	cout << "upx = " << (upx ? "dolu" : "bos") << "\n";
	cout << "upy = " << (upy ? "dolu" : "bos") << "\n";
}

