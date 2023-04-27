// John Gantner
// 4/27/2023
// C++ Software Development

#include <iostream>
using namespace std;

// Creating classes for the different exceptions
class InvalidCharacterException {}; // Handles a case where start is not an alphabetical character
class InvalidRangeException {}; // Handles a case where the offset arguement goes beyond the alphabet
class CaseConversionException {}; // Handles a case where there is a upper and lower case transition 

