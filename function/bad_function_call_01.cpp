#include <functional>
#include <iostream>


int main()
{
	using namespace std;

	function<int(int)> fnc;

	try {
		auto x = fnc(13);

	}
	//catch (const std::exception& ex) {
	catch (const std::bad_function_call& ex) {
		std::cout << "hata yakalandi : " << ex.what() << "\n";
		cout << typeid(ex).name() << "\n";
	}


}
