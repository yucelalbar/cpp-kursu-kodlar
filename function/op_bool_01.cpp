#include <functional>
#include <iostream>

int foo(int x)
{
	std::cout << "foo cagrildi\n";
	return x * x + 5;
}

int main()
{
	using namespace std;

	function<int(int)> fnc;

	if (fnc) {
		std::cout << "dolu durumda\n";
		auto x = fnc(20);
		std::cout << "x = " << x << "\n";
	}
	else {
		std::cout << "bos durumda\n";
	}

	fnc = foo;

	if (fnc) {
		std::cout << "dolu durumda\n";
		auto x = fnc(20);
		std::cout << "x = " << x << "\n";
	}
	else {
		std::cout << "bos durumda\n";
	}


}
