/*
Name - Sam Bryant Date - 9-21-17 Period 2
Assignment Name : Display Text
"Create a New Project to display your Full Name, your period stored as a vairable, and "Hello World"
without quatations.
*/

// Libraries
#include <iostream>
#include <conio.h> // gives access to _kbhit()
// Namespaces
using namespace std;
// Functions()
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	cout << "\n";
}

// MAIN
void main() {
	int period = 2;
	// Display Text:
	cout << "Name : Sam Bryant" << "\n" << "Period : " << period << endl;
	cout << "Hello World!" << endl;
	pause();
	return;
}