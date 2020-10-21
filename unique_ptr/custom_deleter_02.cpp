#include <iostream>
#include <memory>
#include <string>

int main()
{
	using namespace std;

	auto f = [](string* p) {
		cout << "lambda deleter deletes the string at " << p << "\n";
		delete p;
	};

	unique_ptr<string, decltype(f)> uptr{ new string{"ahmet aksoy"}, f };
}
