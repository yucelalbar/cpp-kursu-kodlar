#include <memory>
#include "triple.h"

int main()
{
	std::unique_ptr<Triple[]> uptr{ new Triple[5] };
}
