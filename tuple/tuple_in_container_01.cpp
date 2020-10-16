#include <tuple>
#include <string>
#include "date.h"
#include <vector>
#include "nutility.h"
#include <fstream>
#include <iomanip>

using info = std::tuple<int, std::string, std::string, Date>;


int main()
{
	using namespace std;

	vector<info> ivec;

	randomize();
	for (int i = 0; i < 5000; ++i) {
		ivec.emplace_back(rand() % 1000, rtown(), rname(), Date::random());
	}

	sort(ivec.begin(), ivec.end());
	std::ofstream ofs{ "out.txt" };
	if (!ofs) {
		std::cerr << "out.txt dosyasi olusturulamadi\n";
		exit(EXIT_FAILURE);
	}

	ofs << left;

	for (const auto& [no, town, name, bdate] : ivec) {
		ofs << no << " " << setw(16) << town << setw(16) << name << bdate << "\n";
	}
}
