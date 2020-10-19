#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>

int main()
{
	using namespace std;

	vector<int> ivec{ 2, 5, 5, 7, 9, 9, 9, 9, 12, 12, 16, 35 };
	copy(begin(ivec), end(ivec), ostream_iterator<int>(cout, " "));

	int ival;

	cout << "\nbir deger girin: ";
	cin >> ival;

	auto iter_lower = lower_bound(ivec.begin(), ivec.end(), ival);
	auto iter_upper = upper_bound(ivec.begin(), ivec.end(), ival);

	std::cout << "distance for lower bound : " << distance(ivec.begin(), iter_lower) << "\n";
	std::cout << "distance for upper bound : " << distance(ivec.begin(), iter_upper) << "\n";
	cout << "distance for equal range " << distance(iter_lower, iter_upper) << "\n";

	copy(iter_lower, iter_upper, ostream_iterator<int>(cout, " "));
}
