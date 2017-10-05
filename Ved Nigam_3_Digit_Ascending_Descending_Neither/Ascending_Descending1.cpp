/*
Ved Nigam-Period 3-Computer Science 1
In this assignment, we will split a 3 digit number into 3 different numbers with the same characters as the 3 digit number. We will then run a tets to see if the numbers are
"Descending," "Ascending," or "Neither."
*/

//Libraries
#include <iostream>
#include <conio.h>
//Namespaces
using namespace std;
//Functions
void pause() {
	cout << "Press Any Key to Continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

void main() {
	int x;
	int a;
	int b;
	int c;

	cout << "Enter a 3 Digit Number . . ." << endl;
	cin >> x;
	c = x % 10;
	b = x / 10 % 10;
	a = x / 100;

	if (a > b && b > c) {
		cout << "Descending" << endl;
	}
	else if (a < b && b < c) {
		cout << "Ascending" << endl;
	}
	else {
		cout << "Neither" << endl;
	}
	pause();
}

