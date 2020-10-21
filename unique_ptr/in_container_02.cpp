#include <memory>
#include "triple.h"
#include <vector>


using NecPtr = std::unique_ptr<Triple>;

int main()
{
	using namespace std;

	{
		vector<NecPtr> myvec;

		for (int i = 0; i < 5; ++i)
			myvec.push_back(make_unique<Triple>(i, i, i));

		for (int i = 0; i < 5; ++i)
			myvec.emplace_back(new Triple{ i * i, i * i, i * i });

		myvec.push_back(unique_ptr<Triple>{new Triple{ -1, -1, -1 }});

		for (const auto& x : myvec)
			cout << *x << "\n";
		getchar();
	}

	std::cout << "main devam ediyor\n";
}
