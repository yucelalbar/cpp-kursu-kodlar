//tuple sınıf şablonu için tie işlevi yerine yapısal bağlama kullanmanın avantajları


#include <tuple>
#include <string>

std::tuple<int, std::string, double> f()
{
	return { 12, "alican", 3.4 };
}

#include <iostream>

int main()
{
	int x;
	std::string s;
	double d;

	tie(x, s, d) = f();

	auto [ival, str, dval] = f();
	
	std::cout << ival << " " << str << " " << dval << "\n";
}
