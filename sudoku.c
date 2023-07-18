#include "sudoku.h"

int main(){
	int ** puzzle;
	Square *** sudoku;
	
	puzzle = createPuzzle();
	
	printPuzzle(puzzle);

	setUpPuzzle(puzzle);

	return 0;

}

