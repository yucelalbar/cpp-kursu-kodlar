//yapisal baglama ve referans semantigi

int a[] = { 1, 2, 3 };

auto& func()
{
	return a;
}

#include <iostream>

int main()
{
	auto& [x, y, z] = func();
	++x;
	++y;
	++z;

	for (auto i : a)
		std::cout << i << " ";
}
