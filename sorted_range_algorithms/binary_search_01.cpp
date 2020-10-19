#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include "nutility.h" //rname


int main()
{
	using namespace std;

	vector<string> svec(100);
	generate(begin(svec), end(svec), rname); // nutility
	sort(begin(svec), end(svec));
	svec.erase(unique(begin(svec), end(svec)), end(svec));
	cout << "size = " << svec.size() << "\n";
	copy(begin(svec), end(svec), ostream_iterator<string>(cout, " "));
	cout << "\n";

	string  name;

	cout << "bir isim girin: ";
	cin >> name;

	cout << (binary_search(begin(svec), end(svec), name) ? "var" : "yok");
}
