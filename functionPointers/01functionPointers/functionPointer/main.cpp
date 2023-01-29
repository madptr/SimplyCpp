#include <stdio.h>

// we will consider a simple usecase for using function pointer
#define USECASE 1

//////
// **** uncomment next statement for the first example ****
//////

// #define EXAMPLE_FPTR 1

#ifdef EXAMPLE_FPTR
#undef USECASE
#endif // EXAMPLE_FPTR

unsigned int updateCount = 0;

void initGame();
void renderGame();
bool exitGame();

void initGame(){
	printf("initialized!\n\n");
}

void renderGame() {
	printf("rendering\n");
}

bool exitGame() {
	if (updateCount > 10) {
		printf("\nexit!\n");
		return true;
	}
	return false;
}

#ifdef USECASE

bool g_firstUpdate = false;
void updateGame();

void updateGame(){
	if (g_firstUpdate)
		printf("first update\n");
	else
		printf("update %d!\n", updateCount);
	updateCount++;
}

#endif // USECASE

#ifdef EXAMPLE_FPTR

// declaring the function pointer
void (*updateGame)();

// declaring relevant functions
void updateGameFirstTime();
void updateGameNormal();

void updateGameFirstTime() {
	printf("first update\n");

	// update the function pointer to point to the other function
	updateGame = updateGameNormal;
}

void updateGameNormal() {
	printf("update %d!\n", updateCount);
	updateCount++;
}

#endif // EXAMPLE_FPTR



int main(const char* argc, int argv) {
	initGame();
#ifdef EXAMPLE_FPTR
	updateGame = updateGameFirstTime;
#endif // EXAMPLE_FPTR

	while (!exitGame()) {
		updateGame();
		renderGame();
	}
	return 0;
}

