#include <set>
#include <string>
#include <iostream>

void func1()
{
	std::set<std::string> myset{ "mahmut", "ali", "yesim", "nur", "deniz" };

	auto p = myset.insert("yesim");
	if (p.second) {
		std::cout << "eklenen oge : " << *p.first << "\n";
	}
	else {
		std::cout << *p.first << " sette zaten var\n";
	}
}

void func2()
{
	std::set<std::string> myset{ "mahmut", "ali", "yesim", "nur", "deniz" };

	if (auto [iter, flag] = myset.insert("yesim"); flag) {
		std::cout << "eklenen oge : " << *iter << "\n";
	}
	else {
		std::cout << *iter << " sette zaten var\n";
	}
}


int main()
{
	func1();
	//func2();

}
