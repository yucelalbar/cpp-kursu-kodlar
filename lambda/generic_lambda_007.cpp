#include <vector>
#include <algorithm>
#include <cstdio>

void func(int) { putchar('i'); }
void func(double) { putchar('d'); }
void func(long) { putchar('l'); }

using namespace std;

int main()
{
	vector<int> ivec(20);
	vector<int> dvec(20);
	//...
	//for_each(begin(ivec), end(ivec), func); //gecersiz
	for_each(begin(ivec), end(ivec), (void (*)(int))func);
	putchar('\n');
	for_each(begin(ivec), end(ivec), [](auto x) {return func(x); });
	putchar('\n');
	for_each(begin(dvec), end(dvec), [](auto x) {return func(x); });
}
