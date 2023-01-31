#include "xAbstractFunctionality.h"

bool initA() {
	printf("Initialized AType!\n");
	return true;
}

void functionalityA() {
	printf("Functionality of AType!\n");
}

void initFunctionalityAFtors() {
	init = initA;
	functionality = functionalityA;
}