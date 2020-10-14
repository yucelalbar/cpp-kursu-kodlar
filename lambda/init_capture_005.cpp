#include <memory>
#include <string>
#include <iostream>

int main()
{
	using namespace std;
		
	auto up = make_unique<string>("necati");
	auto f = [up = move(up)]{ return *up + " ergin"; };

	cout << f() << "\n";
}
