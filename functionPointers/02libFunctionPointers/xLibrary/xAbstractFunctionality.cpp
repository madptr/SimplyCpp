#include "xAbstractFunctionality.h"

bool(*init)();
void(*functionality)();

bool initXLibrary(FunctionalityType type) {
	switch (type)
	{
	case k_A:
		initFunctionalityAFtors();
		return true;
	case k_B:
		initFunctionalityBFtors();
		return true;
	default:
		return false;
	}
}