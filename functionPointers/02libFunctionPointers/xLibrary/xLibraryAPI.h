#ifndef X_LIBRARY_API_H
#define X_LIBRARY_API_H

enum FunctionalityType {
	k_A,
	k_B
};

extern bool(*init)();
extern void(*functionality)();

extern bool initXLibrary(FunctionalityType type);


#endif // !X_LIBRARY_API_H
