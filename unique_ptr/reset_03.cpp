#include "triple.h"
#include <memory>

int main()
{
	using namespace std;

	auto upx = make_unique<Triple>(10, 30, 56);
	cout << *upx << "\n";
	cout << (upx ? "dolu" : "bos") << "\n";
	upx.reset();
	//upx.reset(nullptr);
	cout << (upx ? "dolu" : "bos") << "\n";
	std::cout << "main devam ediyor\n";
}
