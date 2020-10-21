#include <memory>
#include "triple.h"

int main()
{
	using namespace std;
	auto upx = make_unique<Triple>(1, 4, 7);
	Triple* ptr = upx.get();
	
	unique_ptr<Triple> upy(ptr); //ub
}
