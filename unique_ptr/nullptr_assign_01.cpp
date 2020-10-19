#include "triple.h"
#include <iostream>

int main()
{
	using namespace std;

	auto upx = make_unique<Triple>(10, 30, 56);
	cout << *upx << "\n";
	cout << (upx ? "dolu" : "bos") << "\n";

	upx = nullptr;

	getchar();
	cout << (upx ? "dolu" : "bos") << "\n";
}
