#include <memory>
#include <string>
#include <iostream>

int main()
{
	using namespace std;

	try {
		unique_ptr<string> upx;
		if (upx)
			cout << *upx << "\n";  //ub
	}
	catch (const std::exception& ex) {
		std::cout << "hata yakalandi : " << ex.what() << "\n";
	}
}
