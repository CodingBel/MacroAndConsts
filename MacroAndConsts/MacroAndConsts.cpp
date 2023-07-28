// The following program is written to understand the difference between a macros definition 
// and constant variable declarations. 
// Marcros definitions are basically preprocessor directives that simply replace your macros 
// in your program. They literally Copy and Paste your macros to your program and not basically 
// stored in memory so you can NOT see their memory. 

// line 17 and and 18 are exactly the same to the compiler. 

#include <iostream>

#define myMacro 5
const int myConst = 5; 

int main() {
	std::cout << "The memory locations of myConst is: " << &myConst << std::endl;

	std::cout << "The memory locaiton of myMacro is: " << &myMacro << std::endl; 
	std::cout << "The memory locaion of 5 is: " << &5 << std::endl; 

	return 0; 
}
