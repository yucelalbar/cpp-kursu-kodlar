#include <array>
#include <iostream>

int main()
{
	using namespace std;

	array<int, 5> ax{ 1, 4, 5, 6, 7 };
	using atype = decltype(ax);
	int idx = 3;
	constexpr int index = 3;

	cout << get<0>(ax) << "\n";
	//cout << get<idx>(ax) << "\n"; //gecersiz
	cout << get<index>(ax) << "\n";
	cout << tuple_size<atype>::value<< "\n";
	cout << tuple_size_v<atype><< "\n";
	tuple_element<1, atype>::type ival = 34;
}
