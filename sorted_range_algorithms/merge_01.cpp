#include <vector>
#include <string>
#include <algorithm>
#include "nutility.h"

int main()
{
	using namespace std;

	vector<string> svec1(10);
	vector<string> svec2(6);
	generate(svec1.begin(), svec1.end(), rname); //nutility
	generate(svec2.begin(), svec2.end(), rname); //nutility
	sort(svec1.begin(), svec1.end());
	sort(svec2.begin(), svec2.end());
	cout << "svec1\n";
	copy(svec1.begin(), svec1.end(), ostream_iterator<string>{cout, " "});
	cout << "\nsvec2\n";
	copy(svec2.begin(), svec2.end(), ostream_iterator<string>{cout, " "});
	vector<string> destvec(svec1.size() + svec2.size());
	merge(svec1.begin(), svec1.end(), svec2.begin(), svec2.end(), destvec.begin());
	cout << "\nsvec3\n";

	copy(destvec.begin(), destvec.end(), ostream_iterator<string>{cout, " "});

}
