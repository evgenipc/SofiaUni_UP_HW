/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Evgeni Dimov
* @idnumber 45137
* @task 1
* @compiler VC
*
*/

#include<iostream>
using namespace std;

void IntToRoman(int number) {
	
	if (number >= 1000)
	{
		switch (number / 1000) {
		case 1: cout << "M"; break;
		case 2: cout << "MM"; break;
		case 3: cout << "MMM"; break;
		}
	}
	number %= 1000; //  getting only the last 3 digits

	if (number >= 900)
	{
		cout << "CM";
	}
	else if (number >= 500)
	{
		cout << "D";
		switch ((number - 500) / 100)
		{
		case 1: cout << "C"; break;
		case 2: cout << "CC"; break;
		case 3: cout << "CCC"; break;
		}
	}
	else if (number >= 400)
	{
		cout << "CD";
	}
	else if (number >= 100)
	{
		switch ((number % 100) / 100)
		{
		case 1: cout << "C"; break;
		case 2: cout << "CC"; break;
		case 3: cout << "CCC"; break;
		}
	}
	number %= 100; // Getting the last 2 digits of the number 
	if (number>= 90) {
		cout << "XC";
	}
	else if (number >= 50) {
		cout << "L";
		switch ((number - 50) / 10)
		{
		case 1: cout << "X"; break;
		case 2: cout << "XX"; break;
		case 3: cout << "XXX"; break;
		}
	}
	else if (number >= 40) {
		cout << "XL";
	}
	else if (number >= 10) {
		switch (number / 10)
		{
		case 1: cout << "X"; break;
		case 2: cout << "XX"; break;
		case 3: cout << "XXX"; break;
		}
	}

	number %= 10; // Getting the last digit of the number;

	if (number >= 9) {
		cout << "IX";
	}
	else if (number >= 5) {
		cout << "V";
		switch (number)
		{
		case 6: cout << "I"; break;
		case 7: cout << "II"; break;
		case 8: cout << "III"; break;
		}
	}
	else if (number==4) {
		cout << "IV";
	}
	else if (number >= 1) {
		switch (number)
		{
		case 1: cout << "I"; break;
		case 2: cout << "II"; break;
		case 3: cout << "III"; break;
		}
	}
	cout << "\n";

}

int main() {

	int input = 0;
	cin >> input;
	// Validate input
	if (input < 0 || input > 3000) {
		cout << "Invalid number!\n";
	}
	else
		IntToRoman(input);

	return 0;
}