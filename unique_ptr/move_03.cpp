#include "triple.h"
#include <memory>

std::unique_ptr<Triple> func(void);

int main()
{
	auto uptr = func(); //gecerli (move semantics)
}
