#include <memory>
#include <vector>
#include <conio.h>
#include <iostream>


using namespace std;

struct Member {

};

struct Owner
{
	Member mx;
};

void func()
{
	shared_ptr<Owner> spo(new Owner); // use_count == 1
	shared_ptr<Member> spm(spo, &spo->mx); // use_count == 2

	spo.reset(); // use_count == 1

	// When d goes out of scope, object is deleted.
}

using Ovec = std::vector<Owner>;


int main()
{

	shared_ptr<Ovec> os(new Ovec); // use_count == 1
	os->push_back(Owner());
	os->push_back(Owner());

	shared_ptr<Owner> o1(os, &os->at(0)); // use_count == 2
	shared_ptr<Owner> o2(os, &os->at(1)); // use_count == 3
	shared_ptr<Member> o3(os, &os->at(1).mx); // use_count == 3
	std::cout << os.use_count() << "\n";
	_getch();

	os.reset(); // use_count == 2

	// When o1 goes out of scope, use_count becomes 1.
	// When o2 goes out of scope, objects is deleted.
}
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
