#include "car.h"
#include <random>


std::unique_ptr<Car> CreateRandomCar()
{
	using namespace std;

	static std::mt19937 eng{ std::random_device{}() };
	static std::uniform_int_distribution<int> dist{ 0, 5 };

	switch (dist(eng)) {
	case 0: return make_unique<Mercedes>();
	case 1: return make_unique<Audi>();
	case 2: return make_unique<Fiat>();
	case 3: return make_unique<Renault>();
	case 4: return make_unique<Mercedes_S500>();
	case 5: return make_unique<Bmw>();
	}
	return nullptr;
}
