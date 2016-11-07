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
	while (number >= 1000)
	{
		cout << "M";
		number -= 1000;
	}
	while (number >= 900)
	{
		cout << "CM";
		number -= 900;
	}
	while (number >= 500)
	{
		cout << "D";
		number -= 500;
	}
	while (number >= 400)
	{
		cout << "CD";
		number -= 400;
	}
	while (number >= 100)
	{
		cout << "C";
		number -= 100;
	}
	while (number >= 90) {
		cout << "XC";
		number -= 90;
	}
	while (number >= 50) {
		cout << "L";
		number -= 50;
	}
	while (number >= 40) {
		cout << "XL";
		number -= 40;
	}
	while (number >= 10) {
		cout << "X";
		number -= 10;
	}
	while (number >= 9) {
		cout << "IX";
		number -= 9;
	}
	while (number >= 5) {
		cout << "V";
		number -= 5;
	}
	while (number >= 4) {
		cout << "IV";
		number -= 4;
	}
	while (number >= 1) {
		cout << "I";
		number -= 1;
	}

	cout << "\n";

}

int main() {

	int input = 0;
	cin >> input;

	if (input < 0 || input >= 3000) {
		cout << "Invalid number!\n";
	}
	else
		IntToRoman(input);


	return 0;
}