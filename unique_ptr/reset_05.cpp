#include "triple.h"
#include <memory>

int main()
{
	using namespace std;

	auto upx = make_unique<Triple>(10, 30, 56);
	cout << *upx << "\n";
	cout << (upx ? "dolu" : "bos") << "\n";

	upx.reset(new Triple{ -1, -2, -3 });
	getchar();
	cout << (upx ? "dolu" : "bos") << "\n";
}
