#include <iostream>
#include <memory>
#include <conio.h>


class Member {
public:
	Member()
	{
		std::cout << "Member constructor\n";
	}

	~Member()
	{
		std::cout << "Member destructor\n";
	}
};

class Owner {
public:
	Owner()
	{
		std::cout << "Owner constructor\n";
	}

	~Owner()
	{
		std::cout << "Owner destructor\n";
	}
	Member mx;
private:

};


using namespace std;

int main()
{
	auto sp = make_shared<Owner>();

	auto spm = shared_ptr<Member>(sp, &sp->mx);

	cout << spm.use_count() << "\n";
	cout << sp.use_count() << "\n";

	_getch();

	sp.reset();

	cout << spm.use_count() << "\n";
	cout << sp.use_count() << "\n";
}
