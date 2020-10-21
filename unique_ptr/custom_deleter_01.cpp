#include <string>
#include <iostream>

struct SDeleter {
	void operator()(std::string* p)
	{
		std::cout << "delete edilen nesne adresi: " << p << "\n";
		delete p;
	}
};

int main()
{
	using namespace std;

	unique_ptr<string, SDeleter> uptr{ new string{"ahmet aksoy"} };
}
