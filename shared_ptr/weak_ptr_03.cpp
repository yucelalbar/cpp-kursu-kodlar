#include "date.h"


int main()
{
	using namespace std;
	auto sptr{ make_shared<Date>(12, 5, 1987) };
	weak_ptr<Date> wp{ sptr };

	cout << "sptr.use_count() = " << sptr.use_count() << "\n";
	wp.reset();
	cout << "wp.use_count() = " << wp.use_count() << "\n";
	cout << boolalpha << wp.expired() << "\n";
	if (!wp.expired()) {
		shared_ptr<Date> sp(wp);
		cout << *sp << "\n";
	}
	else {
		cout << "kaynak sonlandirilmis\n";
	}
}
