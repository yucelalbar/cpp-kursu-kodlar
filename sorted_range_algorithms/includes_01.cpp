#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iterator>

int main()
{
	using namespace std;

	srand(static_cast<unsigned>(time(nullptr)));
	vector<int> ivec(100);
	generate(ivec.begin(), ivec.end(), [] {return rand() % 1000; });
	
	sort(ivec.begin(), ivec.end());
	copy(ivec.begin(), ivec.end(), ostream_iterator<int>(cout, " "));
	int x, y, z;
	cout << "\n\nsirali 3 sayi girin: ";
	cin >> x >> y >> z;
	auto list = { x, y, z };
	if (includes(ivec.begin(), ivec.end(), list.begin(), list.end()))
		std::cout << "bulundu\n";
	else
		std::cout << "bulunamadi\n";
}
