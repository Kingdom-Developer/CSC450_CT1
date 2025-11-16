//============================================================================
// Name        : CT1.cpp
// Author      : Nolan Hill
// Version     : 1
// Copyright   : Your copyright notice
// Description : Simple program to print information of fictional character and resolve errors of two C++ programs
//============================================================================


// Corrections to CSC450_CT1_mod1-1.cpp

/* Simple Program with a few Errors for Correction
   Please be sure to correct all outlined errors.
*/

#include <iostream>
//#include <conio.h>         // Commented this out because it does not work with my compiler

// Standard namespace declaration
using namespace std;

// Program 1 with errors resolved
int mod1()
{

     // Standard Output Statement
     cout << "Welcome to this C++ Program" << endl;

     cout << "I have corrected all errors for this program." << endl;

     // Wait For Output Screen
     cin.get();     // Used this in place of getch() due to it not compiling

     //Main Function return Statement
     return 0;
}


// Corrections to CSC450_CT1_mod1-2.cpp

/* Simple Program with a few Errors for Correction
   Please be sure to correct all outlined errors.
*/

#include <iostream>
//#include <conio.h>         // Commented this out because it does not work with my compiler

// Standard namespace declaration
using namespace std;

// Program 2 with errors resolved
int mod2()
{

     double myMoney = 1000.50;  //this should be printed out


     // Standard Output Statement
     cout << "Please be sure to correct all syntax errors in this program." << endl;

     cout << "I have corrected all errors for this program." << endl;

     cout << " The total amount of money available is = " << myMoney << endl;

     // Wait For Output Screen
     cin.get();     // Used this in place of getch() due to it not compiling

     // Main Function return Statement
     return 0;
}


// Main function th
int main() {

	// Print fictional character's information to console
	cout << "First Name: John" << endl; 			// Print first name and end with newline
	cout << "Last Name: Smith" << endl; 			// Print last name and end with newline
	cout << "Address: 123 Main Street" << endl; 	// Print address and end with newline
	cout << "City: Phoenix" << endl; 				// Print city and end with newline
	cout << "Zip Code: 85001" << endl; 				// Print zip code and end with newline

	// Call on method for mod1
	mod1();

	// Call on method for mod2
	mod2();

	// Return integer, indicating no error
	return 0;
}
