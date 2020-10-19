#include <vector>
#include <string>
#include "nutility.h"
#include <algorithm>
#include <iterator>

int main()
{
	using namespace std;

	vector<string> svec1(10);
	vector<string> svec2(8);

	generate(svec1.begin(), svec1.end(), rname); //nutility
	generate(svec2.begin(), svec2.end(), rname); //nutility

	sort(svec1.begin(), svec1.end());
	sort(svec2.begin(), svec2.end());
	copy(svec1.begin(), svec1.end(), ostream_iterator<string>{cout, " "});
	std::cout << "\n\n";
	copy(svec2.begin(), svec2.end(), ostream_iterator<string>{cout, " "});
	std::cout << "\n\n";

	vector<string> destvec;
	
	set_intersection(svec1.begin(), svec1.end(), svec2.begin(), svec2.end(), back_inserter(destvec));
	//set_union(svec1.begin(), svec1.end(), svec2.begin(), svec2.end(), back_inserter(destvec));
	//set_difference(svec1.begin(), svec1.end(), svec2.begin(), svec2.end(), back_inserter(destvec));
	//set_difference(svec2.begin(), svec2.end(), svec1.begin(), svec1.end(), back_inserter(destvec));
	//set_symmetric_difference(svec2.begin(), svec2.end(), svec1.begin(), svec1.end(), back_inserter(destvec));
	copy(destvec.begin(), destvec.end(), ostream_iterator<string>{cout, " "});
}
//--------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------
