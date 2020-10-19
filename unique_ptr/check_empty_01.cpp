#include <memory>
#include <iostream>
#include <string>



int main()
{
	using namespace std;
	unique_ptr<string> upx;

	if (upx)
		cout << "dolu\n";
	else
		cout << "bos\n";

	if (upx != nullptr)
		cout << "dolu\n";
	else
		cout << "bos\n";

	if (upx.get())
		cout << "dolu\n";
	else
		cout << "bos\n";

	if (upx.get() != nullptr)
		cout << "dolu\n";
	else
		cout << "bos\n";


}
