//cooked usef defined literals

constexpr double operator"" _fag(long double degrees)
{
	return static_cast<double>((degrees - 32) / 1.8);
}

#include <iostream>

using namespace std;


int main()
{
	std::cout << 34.87_fag;
}
