#include <memory>
#include "triple.h"

std::unique_ptr<Triple> foo()
{
	return new Triple; //gecersiz
}
