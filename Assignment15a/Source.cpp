// John Gantner
// 4/27/2023
// C++ Software Development

#include <iostream>
using namespace std;

// Creating classes for the different exceptions
class InvalidCharacterException {}; // Handles a case where start is not an alphabetical character
class InvalidRangeException {}; // Handles a case where the offset arguement goes beyond the alphabet
class CaseConversionException {}; // Handles a case where there is a upper and lower case transition 

char character(char start, int offset)
{
	char result = start + offset;
	try
	{
		if (!isalpha(start))
		{
			throw InvalidCharacterException();
		}
		else if (!isalpha(start + offset))
		{
			throw InvalidRangeException();
		}
		else if (islower(result) && isupper(start))
		{
			throw CaseConversionException();
		}
		else if (islower(start) && isupper(result))
		{
			throw CaseConversionException();
		}
	}
	catch (const InvalidCharacterException ex)
	{
		cout << "Error: Invalid Character Exception" << endl;
		return ' ';
	}
	catch (const InvalidRangeException ex)
	{
		cout << "Error: Invalid Range Exception" << endl;
		return ' ';
	}
	catch (const CaseConversionException ex)
	{
		cout << "Error: Case Conversion Exception" << endl;
		return ' ';
	}
	return result;
}

int main() { // Calling the character function
	cout << character('a', 1) << endl;
	cout << character('a', -1) << endl;
	cout << character('Z', -1) << endl;
	cout << character('?', 5) << endl;
	cout << character('A', 32) << endl;

}