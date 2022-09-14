#include "sudoku.h"
#include <iostream>

int main() {
	int puzzle[9][9] = {{1,0,0,0,0,7,0,9,0},
						{0,3,0,0,2,0,0,0,8},
						{0,0,9,6,0,0,5,0,0},
						{0,0,5,3,0,0,9,0,0},
						{0,1,0,0,8,0,0,0,2},
						{6,0,0,0,0,4,0,0,0},
						{3,0,0,0,0,0,0,1,0},
						{0,4,0,0,0,0,0,0,7},
						{0,0,7,0,0,0,3,0,0}};
	Sudoku s(puzzle);
	s.solve();
	s.print();
	std::cout << "PUZZLE 1: ";
	s.verify();

	int puzzle2[9][9] = {{0,0,0,0,0,3,2,9,0},
					 	 {0,8,6,5,0,0,0,0,0},
						 {0,2,0,0,0,1,0,0,0},
						 {0,0,3,7,0,5,1,0,0},
						 {9,0,0,0,0,0,0,0,8},
						 {0,0,2,9,0,8,3,0,0},
						 {0,0,0,4,0,0,0,8,0},
						 {0,0,0,0,0,6,4,7,0},
						 {0,4,7,1,0,0,0,0,0}};
	Sudoku s2(puzzle2);
	s2.solve();
	s2.print();
	std::cout << "PUZZLE 2: ";
	s2.verify();

	int puzzle3[9][9] = {{0,9,0,3,0,0,0,0,1},
					 	 {0,0,0,0,8,0,0,4,6},
						 {0,0,0,0,0,0,8,0,0},
						 {4,0,5,0,6,0,0,3,0},
						 {0,0,3,2,7,5,6,0,0},
						 {0,6,0,0,1,0,9,0,4},
						 {0,0,1,0,0,0,0,0,0},
						 {5,8,0,0,2,0,0,0,0},
						 {2,0,0,0,0,7,0,6,0}};
	Sudoku s3(puzzle3);
	s3.solve();
	s3.print();
	std::cout << "PUZZLE 3: ";
	s3.verify();

	return 0;
}