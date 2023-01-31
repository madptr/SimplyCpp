#include <xLibrary.h>


int main(const char* argc, int argv) {
	initXLibrary(FunctionalityType::k_A);
	init();
	functionality();

	initXLibrary(FunctionalityType::k_B);
	init();
	functionality();
}

