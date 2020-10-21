#include <memory>
#include <iostream>

int main()
{
	using namespace std;

	auto f = [](FILE* f) {
		std::cout << "dosya kapatiliyor\n";
	};
	unique_ptr<FILE, decltype(f)> uptr(fopen("deneme.txt", "w"), f);
}
