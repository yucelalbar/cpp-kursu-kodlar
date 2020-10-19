#include <functional>
#include <iostream>
#include <vector>

using fnc = std::function<int(int)>;

using namespace std;

class Functor {
	int mx;
public:
	Functor(int x) : mx{ x } {}
	int operator()(int val)const { return val * mx; }
};

class Myclass {
public:
	static int foo(int x) { return x * x * x; }
};



int gf(int x)
{
	std::cout << "gf(int x) cagrildi\n";
	return x * x;
}

int main()
{
	//vector<function<int(int)>> fcvec;
	vector<fnc> fcvec;

	fcvec.emplace_back([](int x) {return x * x; });
	fcvec.emplace_back(&Myclass::foo);
	fcvec.emplace_back(gf);
	fcvec.emplace_back(Functor{ 15 });
	//

	size_t idx{};
	///
	auto val = fcvec[idx](4);
	std::cout << "val = " << val << "\n";

}
