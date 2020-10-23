#include <memory>
#include "date.h"

int main()
{
	using namespace std;

	auto sptr = make_shared<Date>(12, 5, 1987);
	weak_ptr<Date> wp{ sptr };

	cout << "sptr.use_count() = " << sptr.use_count() << "\n";
	//wp.reset();
	//cout << "wp.use_count() = " << wp.use_count() << "\n";
	//cout << boolalpha << wp.expired() << "\n";
	//if (shared_ptr<Date> sp = wp.lock()) {
	if (auto sp = wp.lock()) {
		cout << "kaynak halen hayatta : " << *sp << "\n";
	}
	else {
		cout << "kaynak sonlandirilmis\n";
	}

}
