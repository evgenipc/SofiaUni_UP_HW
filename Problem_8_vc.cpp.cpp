/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2016/2017
*
* @author Evgeni Dimov
* @idnumber 45137
* @task 8
* @compiler VC
*
*/

#include<iostream>
using namespace std;


int main()
{
	unsigned number = 0;
	cin >> number;

	cout << number << " = ";
	if(number/50!=0)
		cout << number / 50 << "*50 + ";
	number %= 50;
	if (number / 20 != 0)
		cout << number / 20 << "*20 + ";
	number %= 20;
	if (number / 10 != 0)
		cout << number / 10 << "*10 + ";
	number %= 10;
	if (number / 5 != 0)
	cout << number / 5 << "*5 + ";
	number %= 5;
	if (number / 2 != 0)
	cout << number / 2 << "*2 + ";
	number %= 2;
	if (number!= 0)
	cout << number << "*1" << endl;

	return 0;
}