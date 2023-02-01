#include <stdio.h>

enum Direction {
	kUp		= 0x00000001,	
	kLeft	= 0x00000010,	
	kRight	= 0x00000100,	
	kDown	= 0x00001000,	
	kDiagUL	= 0x00010000,	// diagonal Up left dir
	kDiagUR = 0x00100000,	// diagonal Up right dir
	kDiagDL = 0x01000000,	// diagonal down left dir
	kDiagDR = 0x10000000	// diagonal down right dir
};

struct ChessPiece {
	Direction m_dir;
	const char* name;

	virtual void update() {

	}
};

struct Pawn : ChessPiece {
	bool m_firstMove = true;

	virtual void update() override {

	}
};

struct Knight : ChessPiece {
	int m_nextList[16];
	virtual void update() override {

	}

	void calculateAllPossibleNextLocations() {

	}
};

void main() {

}