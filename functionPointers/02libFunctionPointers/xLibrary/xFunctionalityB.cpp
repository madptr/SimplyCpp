#include "xAbstractFunctionality.h"

bool initB() {
	printf("Initialized BType!\n");
	return true;
}

void functionalityB() {
	printf("Functionality of BType!\n");
}

void initFunctionalityBFtors() {
	init = initB;
	functionality = functionalityB;
}