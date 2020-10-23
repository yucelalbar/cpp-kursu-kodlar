#include <memory>
#include <iostream>
#include "date.h"

int main()
{
	using namespace std;
	auto sptr = make_shared<Date>(12, 5, 1987);
	weak_ptr<Date> wp{ sptr };

	cout << "sptr.use_count() = " << sptr.use_count() << "\n";
	wp.reset();

	try {
		shared_ptr<Date> spx(wp);
		cout << *spx << "\n";
	}
	catch (const exception& ex) {
		cout << "hata yakalandi : " << ex.what() << "\n";
	}


}
