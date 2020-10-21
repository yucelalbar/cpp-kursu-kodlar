#include "triple.h"
#include <memory>

int main()
{
	using namespace std;

	auto upx = make_unique<Triple>(1, 2, 3);
	cout << "upx = " << (upx ? "dolu" : "bos") << "\n";
	auto pt = upx.release();
	cout << "upx = " << (upx ? "dolu" : "bos") << "\n";
	cout << *pt << "\n";
	cout << *upx << "\n"; //ub
}
