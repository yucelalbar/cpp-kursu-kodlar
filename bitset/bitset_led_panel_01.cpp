#include <bitset>
#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>

int main()
{
	using namespace std;
	using namespace chrono;

	constexpr auto dur = 5ms;
	bitset<64> bs;

	for (;;) {
		bs = 1ull;
		while (bs != 0) {
			cout << bs << "\n";
			this_thread::sleep_for(dur);
			system("cls");
			bs <<= 1;
		}
		bs = ~(~0ull >> 1);
		while (bs != 0) {
			cout << bs << "\n";
			this_thread::sleep_for(dur);
			system("cls");
			bs >>= 1;
		}
	}
}
